// rea decompile_all
// name: AppsFlyerSDK.AppsFlyer.<>c__DisplayClass9_0$$<QueryAsync>b__0
// address: 0x405b468
// body: available
// range: 0x405b468-0x405b573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x405b570 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AppsFlyerSDK_AppsFlyer_<>c__DisplayClass9_0__<QueryAsync>b__0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_09515ba2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181508);
    FUN_03f5c2a4(&DAT_091853b8);
    DAT_09515ba2 = 1;
  }
  if (*(int *)(DAT_09181508 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09515c26 == '\0') {
    FUN_03f5c2a4(&DAT_09181508);
    DAT_09515c26 = '\x01';
  }
  if (*(int *)(DAT_09181508 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar7 = *(long **)(*(long *)(DAT_09181508 + 0xb8) + 8);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *plVar7;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_091853b8) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_0405b554;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091853b8,1);
LAB_0405b554:
                    /* WARNING: Could not recover jumptable at 0x0405b56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar7,uVar1,uVar2,puVar3[1]);
  return;
}

