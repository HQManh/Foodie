// rea decompile_all
// name: AppsFlyerSDK.AppsFlyer.<QueryValidateAndLogAsync>d__95$$MoveNext
// address: 0x405c144
// body: available
// range: 0x405c144-0x405c2f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x405c2f0 to 0x6b426d4 FUN_06b426d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x405c2f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AppsFlyerSDK_AppsFlyer_<QueryValidateAndLogAsync>d__95__MoveNext(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((DAT_09515ba6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181508);
    FUN_03f5c2a4(&DAT_0919a370);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_091853b8);
    FUN_03f5c2a4(&DAT_09225358);
    DAT_09515ba6 = 1;
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
  uVar2 = DAT_09225358;
  plVar6 = *(long **)(*(long *)(DAT_09181508 + 0xb8) + 8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = *plVar6;
  uVar7 = *(undefined8 *)(param_1 + 6);
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_091853b8) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_0405c264;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(plVar6,DAT_091853b8,1);
LAB_0405c264:
  plVar6 = (long *)(*(code *)*puVar1)(plVar6,uVar2,uVar7,puVar1[1]);
  if (plVar6 != (long *)0x0) {
    if (*(byte *)(DAT_09176b80 + 0x130) <= *(byte *)(*plVar6 + 0x130)) {
      if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(DAT_09176b80 + 0x130) * 8 + -8) !=
          DAT_09176b80) {
        plVar6 = (long *)0x0;
      }
      goto LAB_0405c2b8;
    }
  }
  plVar6 = (long *)0x0;
LAB_0405c2b8:
  uVar2 = AppsFlyerSDK_AFSDKValidateAndLogResult__Init(0,plVar6,0,0);
  *param_1 = 0xfffffffe;
  FUN_06b426d4(param_1 + 2,uVar2,DAT_0919a370);
  return;
}

