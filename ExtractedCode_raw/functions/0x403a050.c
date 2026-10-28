// rea decompile_all
// name: FUN_0403a050
// address: 0x403a050
// body: available
// range: 0x403a050-0x403a40b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x403a408 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_0403a050(long *param_1)

{
  short *psVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  void *pvVar12;
  byte *local_40;
  long lStack_38;
  
  psVar1 = (short *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((ulong)((long)pbVar2 - (long)psVar1) < 3) {
    if ((long)pbVar2 - (long)psVar1 != 2) {
      return (undefined8 *)0x0;
    }
  }
  else if (*psVar1 == 0x7066 && (char)psVar1[1] == 'T') {
    pvVar12 = (void *)param_1[0x266];
    *param_1 = (long)psVar1 + 3;
    lVar11 = *(long *)((long)pvVar12 + 8);
    puVar3 = pvVar12;
    if (0xfffffffffffff00f < lVar11 - 0xfd0U) {
LAB_0403a264:
      *(long *)((long)puVar3 + 8) = lVar11 + 0x20;
      puVar6 = (undefined8 *)((long)puVar3 + lVar11 + 0x10);
      *puVar6 = &UNK_08fae288;
      *(undefined1 *)((long)puVar3 + lVar11 + 0x18) = 8;
      *(ushort *)((long)puVar3 + lVar11 + 0x19) =
           *(ushort *)((long)puVar3 + lVar11 + 0x19) & 0xf000 | 0x540;
      *(undefined **)((long)puVar3 + lVar11 + 0x20) = &UNK_01a86f4b;
      *(undefined8 *)((long)puVar3 + lVar11 + 0x28) = 4;
      return puVar6;
    }
    puVar3 = malloc(0x1000);
    if (puVar3 != (void *)0x0) {
      lVar11 = 0;
      *puVar3 = pvVar12;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
      goto LAB_0403a264;
    }
    goto LAB_0403a408;
  }
  if (*psVar1 == 0x7066) {
    pbVar4 = (byte *)(psVar1 + 1);
    *param_1 = (long)pbVar4;
    if (pbVar4 != pbVar2) {
      if (*pbVar4 == 0x72) {
        pbVar4 = (byte *)((long)psVar1 + 3);
        *param_1 = (long)pbVar4;
      }
      if (pbVar4 != pbVar2) {
        if (*pbVar4 == 0x56) {
          pbVar4 = pbVar4 + 1;
          *param_1 = (long)pbVar4;
        }
        if (pbVar4 != pbVar2) {
          if (*pbVar4 == 0x4b) {
            pbVar4 = pbVar4 + 1;
            *param_1 = (long)pbVar4;
          }
          if (pbVar2 != pbVar4) {
            pbVar7 = pbVar4;
            pbVar10 = pbVar4;
            if (*pbVar4 - 0x3a < 0xfffffff6) {
              lVar11 = 0;
              pbVar5 = pbVar4;
              pbVar4 = (byte *)0x0;
            }
            else {
              do {
                pbVar9 = pbVar7;
                pbVar5 = pbVar10;
                if (*pbVar10 - 0x3a < 0xfffffff6) break;
                pbVar10 = pbVar10 + 1;
                *param_1 = (long)pbVar10;
                pbVar9 = pbVar2;
                pbVar7 = pbVar7 + 1;
                pbVar5 = pbVar2;
              } while (pbVar10 != pbVar2);
              lVar11 = (long)pbVar9 - (long)pbVar4;
            }
            if ((pbVar5 != pbVar2) && (*pbVar5 == 0x5f)) {
              pvVar12 = (void *)param_1[0x266];
              *param_1 = (long)(pbVar5 + 1);
              lVar8 = *(long *)((long)pvVar12 + 8);
              puVar3 = pvVar12;
              if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
                puVar3 = malloc(0x1000);
                if (puVar3 == (void *)0x0) {
LAB_0403a408:
                    /* WARNING: Subroutine does not return */
                  std::terminate();
                }
                lVar8 = 0;
                *puVar3 = pvVar12;
                puVar3[1] = 0;
                param_1[0x266] = (long)puVar3;
              }
              *(long *)((long)puVar3 + 8) = lVar8 + 0x20;
              puVar6 = (undefined8 *)((long)puVar3 + lVar8 + 0x10);
              *puVar6 = &UNK_08faf3f8;
              *(byte **)((long)puVar3 + lVar8 + 0x20) = pbVar4;
              *(long *)((long)puVar3 + lVar8 + 0x28) = lVar11;
              *(undefined1 *)((long)puVar3 + lVar8 + 0x18) = 0x43;
              *(ushort *)((long)puVar3 + lVar8 + 0x19) =
                   *(ushort *)((long)puVar3 + lVar8 + 0x19) & 0xf000 | 0x540;
              return puVar6;
            }
          }
        }
      }
    }
  }
  else if (*psVar1 == 0x4c66) {
    pbVar4 = (byte *)(psVar1 + 1);
    *param_1 = (long)pbVar4;
    if ((pbVar2 != pbVar4) && (pbVar10 = pbVar4, 0xfffffff5 < *pbVar4 - 0x3a)) {
      do {
        pbVar7 = pbVar10;
        if (*pbVar10 - 0x3a < 0xfffffff6) break;
        pbVar10 = pbVar10 + 1;
        *param_1 = (long)pbVar10;
        pbVar7 = pbVar2;
      } while (pbVar10 != pbVar2);
      if (pbVar7 == pbVar4) {
        return (undefined8 *)0x0;
      }
      if (pbVar7 == pbVar2) {
        return (undefined8 *)0x0;
      }
      if (*pbVar7 == 0x70) {
        local_40 = pbVar7 + 1;
        *param_1 = (long)local_40;
        if (local_40 != pbVar2) {
          if (*local_40 == 0x72) {
            local_40 = pbVar7 + 2;
            *param_1 = (long)local_40;
          }
          if (local_40 != pbVar2) {
            if (*local_40 == 0x56) {
              local_40 = local_40 + 1;
              *param_1 = (long)local_40;
            }
            if (local_40 != pbVar2) {
              if (*local_40 == 0x4b) {
                local_40 = local_40 + 1;
                *param_1 = (long)local_40;
              }
              if (pbVar2 != local_40) {
                pbVar10 = local_40;
                pbVar4 = local_40;
                if (*local_40 - 0x3a < 0xfffffff6) {
                  lStack_38 = 0;
                  pbVar7 = local_40;
                  local_40 = (byte *)0x0;
                }
                else {
                  do {
                    pbVar5 = pbVar10;
                    pbVar7 = pbVar4;
                    if (*pbVar4 - 0x3a < 0xfffffff6) break;
                    pbVar4 = pbVar4 + 1;
                    *param_1 = (long)pbVar4;
                    pbVar5 = pbVar2;
                    pbVar10 = pbVar10 + 1;
                    pbVar7 = pbVar2;
                  } while (pbVar4 != pbVar2);
                  lStack_38 = (long)pbVar5 - (long)local_40;
                }
                if ((pbVar7 != pbVar2) && (*pbVar7 == 0x5f)) {
                  *param_1 = (long)(pbVar7 + 1);
                  puVar3 = (undefined8 *)FUN_04040a88(param_1,&local_40);
                  return puVar3;
                }
              }
            }
          }
        }
      }
    }
  }
  return (undefined8 *)0x0;
}

