// rea decompile_all
// name: FUN_03fc18f4
// address: 0x3fc18f4
// body: available
// range: 0x3fc18f4-0x3fc1a77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fc1a74 to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc18f4(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  bVar3 = *(byte *)(param_1 + 0x30);
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar1 == 0) {
    if ((param_2 >> 2 & 1) == 0) {
      lVar5 = FUN_03fb4c98();
    }
    else {
      lVar5 = FUN_03fb4dc4();
    }
    lVar6 = FUN_03fb5480(lVar5,param_1,param_2 & 1);
    if (lVar6 == 0) {
      lVar6 = FUN_03fb4dc4();
      if (lVar5 == lVar6) {
        lVar6 = 0;
      }
      else {
        uVar9 = FUN_03fb4dc4();
        lVar6 = FUN_03fb5480(uVar9,param_1,param_2 & 1);
      }
      if (((param_2 >> 2 & 1) == 0) && (lVar6 == 0)) {
        puVar7 = (undefined8 *)FUN_03f98698();
        puVar2 = (undefined8 *)puVar7[1];
        for (puVar7 = (undefined8 *)*puVar7; puVar7 != puVar2; puVar7 = puVar7 + 1) {
          lVar6 = FUN_03f98700(*puVar7);
          lVar8 = FUN_03fb4dc4();
          if (((lVar6 != lVar5) && (lVar6 != lVar8)) &&
             (lVar6 = FUN_03fb5480(lVar6,param_1,param_2 & 1), lVar6 != 0)) goto LAB_03fc19a4;
        }
        lVar6 = 0;
      }
      goto LAB_03fc1960;
    }
  }
  else {
    lVar5 = param_1 + 0x31;
    if ((bVar3 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x40);
    }
    lVar5 = FUN_03f98818(lVar5);
    if (((param_2 >> 1 & 1) != 0) && (lVar5 == 0)) goto LAB_03fc1a68;
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar5 = FUN_03f98700();
      if (((param_2 >> 1 & 1) != 0) && (lVar5 == 0)) goto LAB_03fc1a68;
      lVar6 = 0;
      if (lVar5 != 0) {
        lVar6 = FUN_03fb5480(lVar5,param_1,param_2 & 1);
      }
    }
LAB_03fc1960:
    if (((param_2 >> 1 & 1) != 0) && (lVar6 == 0)) goto LAB_03fc1a68;
    if (lVar6 == 0) {
      return;
    }
  }
LAB_03fc19a4:
  bVar4 = (param_2 & 2) == 0;
  lVar5 = FUN_03fc1284(lVar6,param_1,param_2);
  if (((bVar4) || (lVar5 != 0)) &&
     ((lVar5 == 0 || (lVar5 = FUN_03fc11b8(lVar5,param_1), lVar5 != 0 || bVar4)))) {
    return;
  }
LAB_03fc1a68:
  uVar9 = FUN_03fa6884(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_03fa5c38(uVar9,0);
}

