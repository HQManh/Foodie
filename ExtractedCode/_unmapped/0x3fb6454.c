// rea decompile_all
// name: FUN_03fb6454
// address: 0x3fb6454
// body: available
// range: 0x3fb6454-0x3fb65ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fb65a8 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fb6454(long *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined1 auVar13 [16];
  
  pcVar4 = (char *)param_1[2];
  pcVar5 = (char *)param_1[3];
  if (pcVar4 < pcVar5) {
    do {
      if (pcVar5 <= pcVar4) {
        return 1;
      }
      if (*pcVar4 != '*') {
        return 1;
      }
      lVar10 = *param_1;
      puVar6 = *(undefined4 **)(lVar10 + 0xa8);
      puVar7 = *(undefined4 **)(lVar10 + 0xb0);
      if (puVar6 < puVar7) {
        puVar12 = puVar6 + 1;
        *puVar6 = 0xffffffff;
        *(undefined4 **)(lVar10 + 0xa8) = puVar12;
      }
      else {
        puVar2 = *(undefined4 **)(lVar10 + 0xa0);
        lVar11 = (long)puVar6 - (long)puVar2 >> 2;
        uVar1 = lVar11 + 1;
        if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5fa4c(lVar10 + 0xa0);
        }
        uVar8 = (long)puVar7 - (long)puVar2;
        uVar9 = (long)uVar8 >> 1;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (0x7ffffffffffffffb < uVar8) {
          uVar9 = 0x3fffffffffffffff;
        }
        if (uVar9 == 0) {
          auVar13 = ZEXT816(0);
        }
        else {
          auVar13 = FUN_03fb3f8c((undefined8 *)(lVar10 + 0xb0));
          puVar2 = *(undefined4 **)(lVar10 + 0xa0);
          puVar6 = *(undefined4 **)(lVar10 + 0xa8);
        }
        puVar7 = (undefined4 *)(auVar13._0_8_ + lVar11 * 4);
        puVar12 = puVar7 + 1;
        *puVar7 = 0xffffffff;
        while (puVar6 != puVar2) {
          puVar6 = puVar6 + -1;
          puVar7 = puVar7 + -1;
          *puVar7 = *puVar6;
        }
        *(undefined4 **)(lVar10 + 0xa0) = puVar7;
        *(undefined4 **)(lVar10 + 0xa8) = puVar12;
        *(long *)(lVar10 + 0xb0) = auVar13._0_8_ + auVar13._8_8_ * 4;
        if (puVar2 != (undefined4 *)0x0) {
          operator_delete(puVar2);
        }
      }
      lVar11 = param_1[2];
      pcVar5 = (char *)param_1[3];
      *(undefined4 **)(lVar10 + 0xa8) = puVar12;
      pcVar3 = (char *)(lVar11 + 1);
      param_1[2] = (long)pcVar3;
      pcVar4 = pcVar3;
      if (pcVar3 < pcVar5) {
        lVar10 = (long)pcVar5 - (long)pcVar3;
        do {
          if ((*pcVar3 != ' ') && (pcVar4 = pcVar3, *pcVar3 != '\t')) break;
          pcVar3 = pcVar3 + 1;
          lVar10 = lVar10 + -1;
          param_1[2] = (long)pcVar3;
          pcVar4 = pcVar5;
        } while (lVar10 != 0);
      }
    } while (pcVar4 < pcVar5);
  }
  return 1;
}

