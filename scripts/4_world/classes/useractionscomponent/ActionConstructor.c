modded class ActionConstructor
{
    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);

        //! FLINT 
        actions.Insert(ActionPrepareZenFlint);
    }
}