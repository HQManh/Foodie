// rea decompile_all
// name: AnhPD.FoodOrder.Customer$$Hop
// address: 0x4201794
// body: available
// range: 0x4201794-0x4201a33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42019f0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4201a30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Customer__Hop
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar8 = param_2;
  if ((DAT_09516bee & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917f008);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd28);
    FUN_03f5c2a4(&DAT_091dbee0);
    FUN_03f5c2a4(&DAT_091dbfe8);
    FUN_03f5c2a4(&DAT_091e8240);
    FUN_03f5c2a4(&DAT_091e8248);
    FUN_03f5c2a4(&DAT_0918f890);
    DAT_09516bee = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f890);
  AnhPD_FoodOrder_Customer_<>c__DisplayClass33_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x24) = param_1;
    *(long *)(lVar1 + 0x28) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x28),param_4);
    plVar6 = (long *)(lVar1 + 0x30);
    *plVar6 = param_5;
    thunk_FUN_03f5d7b8(plVar6,param_5);
    uVar5 = *(undefined8 *)(param_4 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar2 & 1) == 0) {
      lVar1 = *plVar6;
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04201a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      return;
    }
    if (*(long *)(param_4 + 0x20) != 0) {
      lVar3 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x20),0);
      plVar6 = (long *)(lVar1 + 0x10);
      *plVar6 = lVar3;
      thunk_FUN_03f5d7b8(plVar6,lVar3);
      if (*(char *)(param_4 + 0x7c) == '\0') {
        if (*plVar6 == 0) goto LAB_04201a30;
        uVar7 = UnityEngine_Transform__get_localPosition(*plVar6,0);
        *(undefined4 *)(param_4 + 0x70) = uVar7;
        *(undefined4 *)(param_4 + 0x74) = uVar8;
        *(undefined4 *)(param_4 + 0x78) = param_3;
        *(undefined1 *)(param_4 + 0x7c) = 1;
      }
      uVar5 = *(undefined8 *)(param_4 + 0x70);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_4 + 0x78);
      *(undefined8 *)(lVar1 + 0x18) = uVar5;
      lVar3 = *(long *)(param_4 + 0x68);
      if (lVar3 != 0) {
        DG_Tweening_TweenExtensions__Kill(lVar3,0,0);
      }
      uVar5 = thunk_FUN_03f9944c(DAT_0917f008);
      FUN_063be1d4(uVar5,lVar1,DAT_091e8240,0);
      uVar5 = DG_Tweening_DOVirtual__Float(0,0x3f800000,param_2,uVar5,0);
      uVar5 = FUN_04d95e8c(uVar5,1,DAT_091dbee0);
      uVar5 = FUN_04d9642c(uVar5,param_4,DAT_091dbfe8);
      uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar4,lVar1,DAT_091e8248,0);
      uVar5 = FUN_04d956bc(uVar5,uVar4,DAT_091dbd28);
      *(undefined8 *)(param_4 + 0x68) = uVar5;
      thunk_FUN_03f5d7b8((long *)(param_4 + 0x68));
      return;
    }
  }
LAB_04201a30:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

