// rea decompile_all
// name: CakeOrder.Home.UIItemPetAssistant$$OnDestroy
// address: 0x43333cc
// body: available
// range: 0x43333cc-0x4333657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4333654 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIItemPetAssistant__OnDestroy(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_095176e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09174e08);
    FUN_03f5c2a4(&DAT_09174f60);
    FUN_03f5c2a4(&DAT_091bf690);
    FUN_03f5c2a4(&DAT_091bf6a0);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197948);
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dccb8);
    FUN_03f5c2a4(&DAT_091dccc0);
    FUN_03f5c2a4(&DAT_091dccc8);
    DAT_095176e7 = 1;
  }
  uVar1 = FUN_0640f598(param_1 + 0xd8,DAT_091977b8);
  if ((uVar1 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xe0);
    uVar4 = *(undefined8 *)(param_1 + 0xd8);
    uVar2 = *(undefined8 *)(param_1 + 0xe8);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = uVar4;
    uStack_48 = uVar5;
    local_40 = uVar2;
    FUN_04b71ee0(&local_50,DAT_091bf690);
  }
  uVar1 = FUN_0640f598(param_1 + 0xc0,DAT_09197948);
  if ((uVar1 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 200);
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = uVar4;
    uStack_48 = uVar5;
    local_40 = uVar2;
    FUN_04b71ee0(&local_50,DAT_091bf6a0);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x98);
  uVar2 = thunk_FUN_03f9944c(DAT_09174f60);
  FUN_071cfb6c(uVar2,param_1,DAT_091dccc8,0);
  if (lVar3 != 0) {
    CakeOrder_SaveProfile_PetAssistantDataAccess__remove_onUpgradePetSkill(lVar3,uVar2,0);
    lVar3 = *(long *)(param_1 + 0x98);
    uVar2 = thunk_FUN_03f9944c(DAT_09174980);
    FUN_070a8c30(uVar2,param_1,DAT_091dccc0,0);
    if (lVar3 != 0) {
      CakeOrder_SaveProfile_PetAssistantDataAccess__remove_onOwnPet(lVar3,uVar2,0);
      lVar3 = *(long *)(param_1 + 0x98);
      uVar2 = thunk_FUN_03f9944c(DAT_09174e08);
      FUN_071cd244(uVar2,param_1,DAT_091dccb8,0);
      if (lVar3 != 0) {
        CakeOrder_SaveProfile_PetAssistantDataAccess__remove_onAssignPet(lVar3,uVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

