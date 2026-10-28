// rea decompile_all
// name: ChocDino.UIFX.Log$$LOG
// address: 0x43a2a58
// body: available
// range: 0x43a2a58-0x43a2e2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a2e2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_Log__LOG(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 local_54;
  
  if ((DAT_09517aaf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09187c50);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b128);
    FUN_03f5c2a4(&DAT_091fa060);
    FUN_03f5c2a4(&DAT_091fa768);
    FUN_03f5c2a4(&DAT_091f7fa8);
    FUN_03f5c2a4(&DAT_09226108);
    DAT_09517aaf = 1;
  }
  iVar1 = UnityEngine_Time__get_frameCount(0);
  if (*(int *)(DAT_09187c50 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09187c50);
  }
  if (iVar1 != **(int **)(DAT_09187c50 + 0xb8)) {
    local_54 = UnityEngine_Time__get_frameCount(0);
    if (*(int *)(DAT_09187c50 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187c50);
    }
    **(undefined4 **)(DAT_09187c50 + 0xb8) = local_54;
    uVar2 = FUN_03f5c42c(DAT_09535420,&local_54);
    uVar2 = System_String__Format(DAT_091fa768,uVar2,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__Log(uVar2,0);
    *(undefined8 *)(*(long *)(DAT_09187c50 + 0xb8) + 8) = **(undefined8 **)(DAT_09535468 + 0xb8);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(*(long *)(DAT_09187c50 + 0xb8) + 0x10) = **(undefined8 **)(DAT_09535468 + 0xb8);
    thunk_FUN_03f5d7b8();
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((uVar3 & 1) == 0) {
    if (param_2 == 0) goto LAB_043a2e2c;
    plVar4 = (long *)System_Object__GetType(param_2,0);
joined_r0x043a2cc8:
    if (plVar4 == (long *)0x0) goto LAB_043a2e2c;
    uVar2 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    param_4 = System_String__Concat(uVar2,DAT_091fa060,param_4,0);
  }
  else {
    plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918b128);
    System_Diagnostics_StackTrace___ctor(plVar4,1,0,0);
    if ((plVar4 != (long *)0x0) &&
       (plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,0,*(undefined8 *)(*plVar4 + 400)),
       plVar4 != (long *)0x0)) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      if (plVar4 == (long *)0x0) goto LAB_043a2e2c;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar3 = System_Type__op_Inequality(plVar4,0,0);
      if ((uVar3 & 1) != 0) goto joined_r0x043a2cc8;
    }
  }
  lVar5 = System_String__Concat(param_4,DAT_091f7fa8,0);
  if (*(int *)(DAT_09187c50 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09187c50);
  }
  uVar3 = System_String__op_Equality(lVar5,*(undefined8 *)(*(long *)(DAT_09187c50 + 0xb8) + 8),0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(DAT_09187c50 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar4 = (long *)(*(long *)(DAT_09187c50 + 0xb8) + 8);
    *plVar4 = lVar5;
    thunk_FUN_03f5d7b8(plVar4,lVar5);
  }
  else {
    lVar5 = **(long **)(DAT_09535468 + 0xb8);
  }
  if (*(int *)(DAT_09187c50 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar6 = (undefined8 *)(*(long *)(DAT_09187c50 + 0xb8) + 0x10);
  *puVar6 = param_1;
  thunk_FUN_03f5d7b8(puVar6,param_1);
  if ((lVar5 != 0) && (lVar5 = System_String__PadRight(lVar5,0x30,0), lVar5 != 0)) {
    uVar2 = System_String__Substring(lVar5,0,0x30,0);
    uVar2 = System_String__Format(DAT_09226108,uVar2,param_1,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__Log(uVar2,0);
    return;
  }
LAB_043a2e2c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

