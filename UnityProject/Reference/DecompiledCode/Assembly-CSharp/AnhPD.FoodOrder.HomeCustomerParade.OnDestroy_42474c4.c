// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade$$OnDestroy
// address: 0x42474c4
// body: available
// range: 0x42474c4-0x42477d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42477d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_HomeCustomerParade__OnDestroy(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09516e80 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174580);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091bf690);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_0919f780);
    FUN_03f5c2a4(&DAT_091a1d08);
    FUN_03f5c2a4(&DAT_091a1d10);
    FUN_03f5c2a4(&DAT_091a1d18);
    FUN_03f5c2a4(&DAT_091ce9e8);
    FUN_03f5c2a4(&DAT_091ce9f0);
    FUN_03f5c2a4(&DAT_091ce9f8);
    FUN_03f5c2a4(&DAT_091aa4f0);
    FUN_03f5c2a4(&DAT_091aa4f8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516e80 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  local_80 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar4 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x40);
    uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar5,param_1,DAT_091ce9f8,0);
    if (lVar6 == 0) goto LAB_042477d4;
    CakeOrder_Home_HomeMapBuildingBase__remove_onLevelConfigChanged(lVar6,uVar5,0);
    lVar6 = *(long *)(param_1 + 0x40);
    uVar5 = thunk_FUN_03f9944c(DAT_09174580);
    FUN_070a8c30(uVar5,param_1,DAT_091ce9f0,0);
    if (lVar6 == 0) goto LAB_042477d4;
    CakeOrder_Home_HomeMapBuildingBase__remove_onPartPresented(lVar6,uVar5,0);
    lVar6 = *(long *)(param_1 + 0x40);
    uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar5,param_1,DAT_091ce9e8,0);
    if (lVar6 == 0) goto LAB_042477d4;
    CakeOrder_Home_HomeMapBuildingBase__remove_onCelebrationRequested(lVar6,uVar5,0);
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    FUN_0564f950(&local_a0,*(long *)(param_1 + 0x118),DAT_091aa4f8);
    while (uVar4 = FUN_0717ed58(&local_a0,DAT_091a1d10), (uVar4 & 1) != 0) {
      uStack_b8 = uStack_88;
      local_c0 = local_90;
      local_b0 = local_80;
      uVar4 = FUN_0640f598(&local_c0,DAT_091977b8);
      uVar3 = local_b0;
      uVar2 = uStack_b8;
      uVar5 = local_c0;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_68 = uVar2;
        local_70 = uVar5;
        local_60 = uVar3;
        FUN_04b71ee0(&local_70,DAT_091bf690);
      }
    }
    FUN_0717ed54(&local_a0,DAT_091a1d08);
    lVar6 = *(long *)(param_1 + 0x118);
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
      if (*(long *)(param_1 + 0x110) != 0) {
        FUN_06fd85dc(*(long *)(param_1 + 0x110),DAT_0919f780);
        return;
      }
    }
  }
LAB_042477d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

