// rea decompile_all
// name: FUN_03fc971c
// address: 0x3fc971c
// body: available
// range: 0x3fc971c-0x3fc98af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_03fc971c(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar6;
  
  uVar4 = (long)param_2 - (long)param_1 >> 4;
  if ((long)uVar4 < 3) {
    if (1 < uVar4) {
      if (uVar4 != 2) {
LAB_03fc97c4:
        FUN_03fc94a4(param_1,param_1 + 2,param_1 + 4,param_3);
        puVar6 = param_1 + 6;
        if (puVar6 != param_2) {
          lVar7 = 0;
          iVar8 = 0;
          puVar12 = param_1 + 4;
          do {
            puVar5 = puVar6;
            uVar4 = *puVar5;
            uVar10 = *puVar12;
            if (uVar4 < uVar10) {
              uVar9 = puVar5[1];
              lVar1 = lVar7;
              do {
                lVar11 = lVar1;
                *(ulong *)((long)param_1 + lVar11 + 0x30) = uVar10;
                *(undefined8 *)((long)param_1 + lVar11 + 0x38) =
                     *(undefined8 *)((long)param_1 + lVar11 + 0x28);
                puVar6 = param_1;
                if (lVar11 == -0x20) goto LAB_03fc983c;
                uVar10 = *(ulong *)((long)param_1 + lVar11 + 0x10);
                lVar1 = lVar11 + -0x10;
              } while (uVar4 < uVar10);
              puVar6 = (ulong *)((long)param_1 + lVar11 + 0x20);
LAB_03fc983c:
              iVar8 = iVar8 + 1;
              *puVar6 = uVar4;
              puVar6[1] = uVar9;
              if (iVar8 == 8) {
                uVar3 = 0;
                uVar2 = (uint)(puVar5 + 2 == param_2);
                goto LAB_03fc98a8;
              }
            }
            puVar6 = puVar5 + 2;
            lVar7 = lVar7 + 0x10;
            puVar12 = puVar5;
          } while (puVar6 != param_2);
        }
        uVar2 = (uint)puVar6;
        uVar3 = 1;
LAB_03fc98a8:
        uVar3 = uVar3 | uVar2;
        goto LAB_03fc9888;
      }
      uVar4 = *param_1;
      if (param_2[-2] < uVar4) {
        *param_1 = param_2[-2];
        param_2[-2] = uVar4;
        uVar4 = param_1[1];
        param_1[1] = param_2[-1];
        param_2[-1] = uVar4;
      }
    }
  }
  else if (uVar4 == 3) {
    FUN_03fc94a4(param_1,param_1 + 2,param_2 + -2,param_3);
  }
  else if (uVar4 == 4) {
    FUN_03fc98b0(param_1,param_1 + 2,param_1 + 4,param_2 + -2,param_3);
  }
  else {
    if (uVar4 != 5) goto LAB_03fc97c4;
    FUN_03fc995c(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
  }
  uVar3 = 1;
LAB_03fc9888:
  return uVar3 & 1;
}

