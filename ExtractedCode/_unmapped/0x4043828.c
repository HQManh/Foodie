// rea decompile_all
// name: FUN_04043828
// address: 0x4043828
// body: available
// range: 0x4043828-0x40439a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40439a4 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_04043828(long *param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  ulong uVar9;
  void *pvVar10;
  
  pbVar6 = (byte *)*param_1;
  pbVar3 = (byte *)param_1[1];
  puVar8 = param_2;
  if (pbVar6 != pbVar3) {
    do {
      if (*pbVar6 != 0x42) {
        return puVar8;
      }
      pbVar7 = pbVar6 + 1;
      *param_1 = (long)pbVar7;
      if ((pbVar3 == pbVar7) || (*pbVar7 - 0x3a < 0xfffffff6)) {
        return (undefined8 *)0x0;
      }
      uVar9 = 0;
      pbVar6 = pbVar6 + 2;
      do {
        pbVar7 = pbVar6;
        *param_1 = (long)pbVar7;
        uVar9 = ((ulong)pbVar7[-1] + uVar9 * 10) - 0x30;
        if (pbVar7 == pbVar3) {
          if (uVar9 != 0) {
            return (undefined8 *)0x0;
          }
          goto LAB_0404393c;
        }
        pbVar6 = pbVar7 + 1;
      } while (*pbVar7 - 0x30 < 10);
      uVar4 = (long)pbVar3 - (long)pbVar7;
      pbVar3 = pbVar7;
      if (uVar4 < uVar9) {
        return (undefined8 *)0x0;
      }
LAB_0404393c:
      *param_1 = (long)(pbVar3 + uVar9);
      if (uVar9 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar10 = (void *)param_1[0x266];
      lVar5 = *(long *)((long)pvVar10 + 8);
      puVar2 = pvVar10;
      if (lVar5 - 0xfc0U < 0xfffffffffffff010) {
        puVar2 = malloc(0x1000);
        if (puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar5 = 0;
        *puVar2 = pvVar10;
        puVar2[1] = 0;
        param_1[0x266] = (long)puVar2;
      }
      *(long *)((long)puVar2 + 8) = lVar5 + 0x30;
      uVar1 = *(ushort *)((long)puVar8 + 9);
      param_2 = (undefined8 *)((long)puVar2 + lVar5 + 0x10);
      *param_2 = &UNK_08fafd98;
      *(byte **)((long)puVar2 + lVar5 + 0x28) = pbVar3;
      *(ulong *)((long)puVar2 + lVar5 + 0x30) = uVar9;
      *(undefined8 **)((long)puVar2 + lVar5 + 0x20) = puVar8;
      *(undefined1 *)((long)puVar2 + lVar5 + 0x18) = 9;
      *(ushort *)((long)puVar2 + lVar5 + 0x19) =
           *(ushort *)((long)puVar2 + lVar5 + 0x19) & 0xf000 | uVar1 & 0xfc0;
      pbVar6 = (byte *)*param_1;
      pbVar3 = (byte *)param_1[1];
      puVar8 = param_2;
    } while (pbVar6 != pbVar3);
  }
  return param_2;
}

