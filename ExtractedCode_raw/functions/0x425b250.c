// rea decompile_all
// name: CakeOrder.CakeOrderCloudSaveController$$OnDestroy
// address: 0x425b250
// body: available
// range: 0x425b250-0x425b433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425b430 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderCloudSaveController__OnDestroy(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09516f48 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091bf690);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_091c45b0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091b9e18);
    FUN_03f5c2a4(&DAT_091b9d98);
    DAT_09516f48 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,DAT_091c45b0,0);
    if (lVar3 == 0) goto LAB_0425b430;
    FUN_0607718c(lVar3,uVar2,DAT_091b9e18);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x48);
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,DAT_091c45b0,0);
    if (lVar3 == 0) {
LAB_0425b430:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_0607718c(lVar3,uVar2,DAT_091b9d98);
  }
  uVar1 = FUN_0640f598(param_1 + 0x60,DAT_091977b8);
  if ((uVar1 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_60 = uVar4;
    uStack_58 = uVar5;
    local_50 = uVar2;
    FUN_04b71ee0(&local_60,DAT_091bf690);
  }
  return;
}

