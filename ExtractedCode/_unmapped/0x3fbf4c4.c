// rea decompile_all
// name: FUN_03fbf4c4
// address: 0x3fbf4c4
// body: available
// range: 0x3fbf4c4-0x3fbf70f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_03fbf4c4(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return true;
  }
  while( true ) {
    while( true ) {
      FUN_03fbea4c(param_1);
      FUN_03fbea4c(param_2);
      if ((((*(byte *)(param_1 + 0x118) >> 5 & 1) != 0) || (*(char *)(param_1 + 0x2a) == '\x13')) ||
         (*(char *)(param_1 + 0x2a) == '\x1e')) {
        if (*(long *)(param_1 + 0x60) == 0) {
          if (param_2 != 0) {
            do {
              uVar3 = (ulong)*(ushort *)(param_2 + 300);
              if (uVar3 != 0) {
                plVar6 = *(long **)(param_2 + 0xa8);
                do {
                  if (*plVar6 == param_1) {
                    return true;
                  }
                  uVar3 = uVar3 - 1;
                  plVar6 = plVar6 + 1;
                } while (uVar3 != 0);
              }
              uVar3 = (ulong)*(ushort *)(param_2 + 0x12e);
              if (uVar3 != 0) {
                plVar6 = *(long **)(param_2 + 0xb0);
                do {
                  if (*plVar6 == param_1) {
                    return true;
                  }
                  uVar3 = uVar3 - 1;
                  plVar6 = plVar6 + 2;
                } while (uVar3 != 0);
              }
              param_2 = *(long *)(param_2 + 0x58);
            } while (param_2 != 0);
            return false;
          }
        }
        else {
          lVar7 = param_2;
          if (param_2 != 0) {
            do {
              if ((lVar7 == param_1) ||
                 (uVar3 = FUN_03f95b78(param_1,lVar7,param_2), (uVar3 & 1) != 0)) {
                return true;
              }
              if (*(short *)(lVar7 + 300) != 0) {
                uVar3 = 0;
                do {
                  lVar4 = *(long *)(*(long *)(lVar7 + 0xa8) + uVar3 * 8);
                  if (lVar4 == param_1) {
                    return true;
                  }
                  uVar2 = FUN_03f95b78(param_1,lVar4,param_2);
                  if ((uVar2 & 1) != 0) {
                    return true;
                  }
                  uVar3 = uVar3 + 1;
                } while (uVar3 < *(ushort *)(lVar7 + 300));
              }
              if (*(short *)(lVar7 + 0x12e) != 0) {
                lVar4 = 0;
                uVar3 = 0;
                do {
                  lVar5 = *(long *)(*(long *)(lVar7 + 0xb0) + lVar4);
                  if (lVar5 == param_1) {
                    return true;
                  }
                  uVar2 = FUN_03f95b78(param_1,lVar5,param_2);
                  if ((uVar2 & 1) != 0) {
                    return true;
                  }
                  uVar3 = uVar3 + 1;
                  lVar4 = lVar4 + 0x10;
                } while (uVar3 < *(ushort *)(lVar7 + 0x12e));
              }
              plVar6 = (long *)(lVar7 + 0x58);
              lVar7 = *plVar6;
              if (*plVar6 == 0) {
                return false;
              }
            } while( true );
          }
        }
        return false;
      }
      if (*(char *)(param_1 + 0x132) == '\0') break;
      bVar1 = *(char *)(param_2 + 0x132) == *(char *)(param_1 + 0x132);
      if (!bVar1) {
        return bVar1;
      }
      param_2 = *(long *)(param_2 + 0x48);
      plVar6 = (long *)(param_1 + 0x48);
      if (*(int *)(param_2 + 0x28) < 0) goto LAB_03fbf6ec;
      param_1 = *plVar6;
      if (param_1 == param_2) {
        return bVar1;
      }
    }
    if (DAT_095353e8 == param_1) {
      return true;
    }
    if (*(long *)(param_1 + 0x60) == 0) break;
    if ((*(ushort *)(param_1 + 0x135) >> 3 & 1) == 0) {
      if ((*(long *)(param_1 + 0x58) == DAT_09535488) &&
         (uVar3 = FUN_03f95b78(param_1,param_2,param_2), (uVar3 & 1) != 0)) {
        return true;
      }
      break;
    }
    param_1 = *(long *)(param_1 + 0x40);
    if (param_1 == param_2) {
      return true;
    }
  }
  if (*(byte *)(param_2 + 0x130) < *(byte *)(param_1 + 0x130)) {
    return false;
  }
  plVar6 = (long *)(*(long *)(param_2 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8);
  param_2 = param_1;
LAB_03fbf6ec:
  return *plVar6 == param_2;
}

