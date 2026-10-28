// rea decompile_all
// name: Newtonsoft.Json.Linq.JObject.<GetEnumerator>d__64$$MoveNext
// address: 0x76e30f4
// body: available
// range: 0x76e30f4-0x76e3357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76e333c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e3340 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e3344 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e3348 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e334c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e3350 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e3354 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Linq_JObject_<GetEnumerator>d__64__MoveNext(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long *plStack_28;
  long local_18;
  
  local_18 = param_1;
  if ((DAT_095227ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b460);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187230);
    FUN_03f5c2a4(&DAT_091a9838);
    DAT_095227ff = 1;
  }
  plStack_28 = &local_18;
  local_30 = 0;
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x58);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = FUN_06c779c4(lVar1,DAT_0919b460);
    *(undefined8 *)(local_18 + 0x30) = uVar2;
    thunk_FUN_03f5d7b8();
    param_1 = local_18;
  }
  plVar6 = *(long **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_09185b10) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_076e320c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_076e320c:
  uVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
  if ((uVar4 & 1) == 0) {
    Newtonsoft_Json_Linq_JObject_<GetEnumerator>d__64__<>m__Finally1();
    *(undefined8 *)(local_18 + 0x30) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(local_18 + 0x30),0);
    return 0;
  }
  plVar6 = *(long **)(local_18 + 0x30);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_0917ac98) {
        puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_076e329c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917ac98,0);
LAB_076e329c:
  plVar6 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(byte *)(DAT_09187230 + 0x130) <= *(byte *)(*plVar6 + 0x130)) &&
     (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_09187230 + 0x130) * 8 + -8) ==
      DAT_09187230)) {
    if (plVar6[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_40 = 0;
    uStack_38 = 0;
    FUN_05614a80(&local_40,plVar6[0xc],*(undefined8 *)(plVar6[0xb] + 0x10),DAT_091a9838);
    *(undefined8 *)(local_18 + 0x20) = uStack_38;
    *(undefined8 *)(local_18 + 0x18) = local_40;
    thunk_FUN_03f5d7b8(local_18 + 0x18,0);
    *(undefined4 *)(local_18 + 0x10) = 1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0();
}

