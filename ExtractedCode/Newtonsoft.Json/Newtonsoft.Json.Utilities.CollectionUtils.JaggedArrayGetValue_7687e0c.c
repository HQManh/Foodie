// rea decompile_all
// name: Newtonsoft.Json.Utilities.CollectionUtils$$JaggedArrayGetValue
// address: 0x7687e0c
// body: available
// range: 0x7687e0c-0x7687fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7687f98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7687f9c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7687fa8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_Utilities_CollectionUtils__JaggedArrayGetValue(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  
  if ((DAT_0952255c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185f80);
    DAT_0952255c = 1;
  }
  if (param_2 == 0) {
LAB_07687f98:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = *(ulong *)(param_2 + 0x18);
  if (0 < (int)uVar5) {
    uVar8 = 0;
    do {
      if ((uVar5 & 0xffffffff) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar1 = *(undefined4 *)(param_2 + uVar8 * 4 + 0x20);
      if (uVar8 == (int)uVar5 - 1) {
        if (param_1 == (long *)0x0) goto LAB_07687f98;
        lVar6 = *param_1;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 == 0) goto LAB_07687f5c;
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_07687f44;
      }
      if (param_1 == (long *)0x0) goto LAB_07687f98;
      lVar6 = *param_1;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185f80) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07687ecc;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185f80,0);
LAB_07687ecc:
      lVar3 = (*(code *)*puVar2)(param_1,uVar1,puVar2[1]);
      lVar6 = DAT_09185f80;
      if (lVar3 == 0) {
        param_1 = (long *)0x0;
      }
      else {
        param_1 = (long *)thunk_FUN_03f99350(lVar3,DAT_09185f80);
        if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar3,lVar6);
        }
      }
      uVar5 = *(ulong *)(param_2 + 0x18);
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)(int)uVar5);
  }
  return param_1;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar7 = piVar7 + 4;
    if (uVar5 == 0) break;
LAB_07687f44:
    if (*(long *)(piVar7 + -2) == DAT_09185f80) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_07687f78;
    }
  }
LAB_07687f5c:
  puVar2 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185f80,0);
LAB_07687f78:
                    /* WARNING: Could not recover jumptable at 0x07687f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar4 = (long *)(*(code *)*puVar2)(param_1,uVar1,puVar2[1]);
  return plVar4;
}

