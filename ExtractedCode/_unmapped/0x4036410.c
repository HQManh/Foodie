// rea decompile_all
// name: FUN_04036410
// address: 0x4036410
// body: available
// range: 0x4036410-0x40367df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40366cc to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4036784 to 0x4037358 FUN_04037358 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40367d8 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40367dc to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_04036410(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  size_t __n;
  ulong uVar14;
  void *pvVar15;
  long *plVar16;
  undefined8 local_48;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar1 != pbVar2) && (*pbVar1 == 0x54)) {
    pbVar12 = pbVar1 + 1;
    *param_1 = (long)pbVar12;
    if (pbVar12 != pbVar2) {
      if (*pbVar12 == 0x4c) {
        pbVar12 = pbVar1 + 2;
        *param_1 = (long)pbVar12;
        if (pbVar2 == pbVar12) {
          return (undefined8 *)0x0;
        }
        if (*pbVar12 - 0x3a < 0xfffffff6) {
          return (undefined8 *)0x0;
        }
        lVar8 = 0;
        pbVar4 = pbVar1 + 4;
        do {
          pbVar12 = pbVar4;
          pbVar11 = pbVar12 + -1;
          *param_1 = (long)pbVar11;
          lVar9 = (ulong)pbVar12[-2] + lVar8 * 10;
          lVar8 = lVar9 + -0x30;
          if (pbVar11 == pbVar2) break;
          pbVar4 = pbVar12 + 1;
        } while (pbVar12[-1] - 0x30 < 10);
        if (pbVar11 == pbVar2) {
          return (undefined8 *)0x0;
        }
        if (pbVar12[-1] != 0x5f) {
          return (undefined8 *)0x0;
        }
        uVar10 = lVar9 - 0x2f;
        *param_1 = (long)pbVar12;
      }
      else {
        uVar10 = 0;
      }
      if (pbVar12 != pbVar2) {
        if (*pbVar12 == 0x5f) {
          uVar14 = 0;
          cVar3 = *(char *)((long)param_1 + 0x30a);
          *param_1 = (long)(pbVar12 + 1);
        }
        else {
          if (*pbVar12 - 0x3a < 0xfffffff6) {
            return (undefined8 *)0x0;
          }
          lVar8 = 0;
          do {
            pbVar4 = pbVar12;
            pbVar12 = pbVar4 + 1;
            *param_1 = (long)pbVar12;
            lVar9 = (ulong)*pbVar4 + lVar8 * 10;
            lVar8 = lVar9 + -0x30;
            if (pbVar12 == pbVar2) break;
          } while (*pbVar12 - 0x30 < 10);
          if (pbVar12 == pbVar2) {
            return (undefined8 *)0x0;
          }
          if (*pbVar12 != 0x5f) {
            return (undefined8 *)0x0;
          }
          uVar14 = lVar9 - 0x2f;
          cVar3 = *(char *)((long)param_1 + 0x30a);
          *param_1 = (long)(pbVar4 + 2);
        }
        if (cVar3 == '\0') {
          if ((*(char *)((long)param_1 + 0x309) == '\0') || (uVar10 != 0)) {
            uVar7 = param_1[0x54] - param_1[0x53] >> 3;
            if ((uVar10 < uVar7) &&
               ((plVar16 = *(long **)(param_1[0x53] + uVar10 * 8), plVar16 != (long *)0x0 &&
                (uVar14 < (ulong)(plVar16[1] - *plVar16 >> 3))))) {
              return *(undefined8 **)(*plVar16 + uVar14 * 8);
            }
            if (uVar7 < uVar10) {
              return (undefined8 *)0x0;
            }
            if (param_1[0x62] == uVar10) {
              if (uVar10 == uVar7) {
                local_48 = 0;
                FUN_04037280(param_1 + 0x53,&local_48);
              }
              puVar5 = (undefined8 *)FUN_04037358(param_1,&UNK_01a36a63);
              return puVar5;
            }
            return (undefined8 *)0x0;
          }
          pvVar15 = (void *)param_1[0x266];
          lVar8 = *(long *)((long)pvVar15 + 8);
          puVar5 = pvVar15;
          if (lVar8 - 0xfc0U < 0xfffffffffffff010) {
            puVar5 = malloc(0x1000);
            if (puVar5 == (void *)0x0) {
LAB_040367d8:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar8 = 0;
            *puVar5 = pvVar15;
            puVar5[1] = 0;
            param_1[0x266] = (long)puVar5;
          }
          *(long *)((long)puVar5 + 8) = lVar8 + 0x30;
          puVar13 = (undefined8 *)((long)puVar5 + lVar8 + 0x10);
          *puVar13 = &UNK_08fae368;
          *(ulong *)((long)puVar5 + lVar8 + 0x20) = uVar14;
          *(undefined8 *)((long)puVar5 + lVar8 + 0x28) = 0;
          *(undefined1 *)((long)puVar5 + lVar8 + 0x30) = 0;
          *(ushort *)((long)puVar5 + lVar8 + 0x19) =
               *(ushort *)((long)puVar5 + lVar8 + 0x19) & 0xf000 | 0xa80;
          plVar16 = (long *)param_1[0x5b];
          plVar6 = (long *)param_1[0x5c];
          *(undefined1 *)((long)puVar5 + lVar8 + 0x18) = 0x2c;
          if (plVar16 == plVar6) {
            plVar6 = (long *)param_1[0x5a];
            __n = (long)plVar16 - (long)plVar6;
            if (plVar6 == param_1 + 0x5d) {
              pvVar15 = malloc(__n * 2);
              if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar16 != plVar6) {
                memmove(pvVar15,plVar6,__n);
              }
              param_1[0x5a] = (long)pvVar15;
            }
            else {
              pvVar15 = realloc(plVar6,__n * 2);
              param_1[0x5a] = (long)pvVar15;
              if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar16 = (long *)((long)pvVar15 + __n);
            param_1[0x5c] = (long)((long)pvVar15 + ((long)__n >> 2) * 8);
          }
          param_1[0x5b] = (long)(plVar16 + 1);
          *plVar16 = (long)puVar13;
          return puVar13;
        }
        pvVar15 = (void *)param_1[0x266];
        lVar8 = *(long *)((long)pvVar15 + 8);
        puVar5 = pvVar15;
        if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
          puVar5 = malloc(0x1000);
          if (puVar5 == (void *)0x0) goto LAB_040367d8;
          lVar8 = 0;
          *puVar5 = pvVar15;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar8 + 0x20;
        puVar13 = (undefined8 *)((long)puVar5 + lVar8 + 0x10);
        *puVar13 = &UNK_08fae288;
        *(undefined1 *)((long)puVar5 + lVar8 + 0x18) = 8;
        *(ushort *)((long)puVar5 + lVar8 + 0x19) =
             *(ushort *)((long)puVar5 + lVar8 + 0x19) & 0xf000 | 0x540;
        *(byte **)((long)puVar5 + lVar8 + 0x20) = pbVar1;
        *(long *)((long)puVar5 + lVar8 + 0x28) = (long)pbVar12 - (long)pbVar1;
        return puVar13;
      }
    }
  }
  return (undefined8 *)0x0;
}

