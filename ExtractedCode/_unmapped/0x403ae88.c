// rea decompile_all
// name: FUN_0403ae88
// address: 0x403ae88
// body: available
// range: 0x403ae88-0x403b1f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x403b1ec to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403b1f0 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403b1f4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0403ae88(long *param_1)

{
  long *__src;
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *__ptr;
  void *pvVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  byte *pbVar15;
  size_t __n;
  long lVar16;
  byte *pbVar17;
  undefined1 auVar18 [16];
  
  lVar3 = FUN_040324c0();
  if ((lVar3 != 0) && (lVar4 = FUN_0403770c(param_1), lVar4 != 0)) {
    pbVar17 = (byte *)*param_1;
    pbVar7 = (byte *)param_1[1];
    pbVar15 = pbVar17;
    if ((pbVar17 != pbVar7) && (*pbVar17 == 0x6e)) {
      pbVar15 = pbVar17 + 1;
      *param_1 = (long)pbVar15;
    }
    if (pbVar7 != pbVar15) {
      if (*pbVar15 - 0x3a < 0xfffffff6) {
        pbVar17 = (byte *)0x0;
        lVar12 = 0;
      }
      else {
        do {
          pbVar10 = pbVar15;
          if (*pbVar15 - 0x3a < 0xfffffff6) break;
          pbVar15 = pbVar15 + 1;
          *param_1 = (long)pbVar15;
          pbVar10 = pbVar7;
        } while (pbVar15 != pbVar7);
        lVar12 = (long)pbVar10 - (long)pbVar17;
        pbVar15 = pbVar10;
      }
      if (pbVar15 != pbVar7) {
        lVar9 = param_1[2];
        lVar2 = param_1[3];
        __src = param_1 + 5;
        do {
          if (*pbVar15 != 0x5f) {
            if ((pbVar15 == pbVar7) || (*pbVar15 != 0x70)) {
              uVar14 = 0;
            }
            else {
              pbVar15 = pbVar15 + 1;
              uVar14 = 1;
              *param_1 = (long)pbVar15;
            }
            if (pbVar15 == pbVar7) {
              return (undefined8 *)0x0;
            }
            if (*pbVar15 != 0x45) {
              return (undefined8 *)0x0;
            }
            *param_1 = (long)(pbVar15 + 1);
            auVar18 = FUN_04034628(param_1,lVar2 - lVar9 >> 3);
            pvVar6 = (void *)param_1[0x266];
            lVar9 = *(long *)((long)pvVar6 + 8);
            puVar13 = pvVar6;
            if (lVar9 - 4000U < 0xfffffffffffff010) {
              puVar13 = malloc(0x1000);
              if (puVar13 == (void *)0x0) goto LAB_0403b1ec;
              lVar9 = 0;
              *puVar13 = pvVar6;
              puVar13[1] = 0;
              param_1[0x266] = (long)puVar13;
            }
            *(long *)((long)puVar13 + 8) = lVar9 + 0x50;
            puVar5 = (undefined8 *)((long)puVar13 + lVar9 + 0x10);
            *puVar5 = &UNK_08faf8c8;
            *(undefined1 *)((long)puVar13 + lVar9 + 0x18) = 0x3b;
            *(undefined1 (*) [16])((long)puVar13 + lVar9 + 0x40) = auVar18;
            *(undefined1 *)((long)puVar13 + lVar9 + 0x50) = uVar14;
            *(ushort *)((long)puVar13 + lVar9 + 0x19) =
                 *(ushort *)((long)puVar13 + lVar9 + 0x19) & 0xf000 | 0x540;
            *(long *)((long)puVar13 + lVar9 + 0x20) = lVar3;
            *(long *)((long)puVar13 + lVar9 + 0x28) = lVar4;
            *(byte **)((long)puVar13 + lVar9 + 0x30) = pbVar17;
            *(long *)((long)puVar13 + lVar9 + 0x38) = lVar12;
            return puVar5;
          }
          pbVar15 = pbVar15 + 1;
          *param_1 = (long)pbVar15;
          if ((pbVar7 == pbVar15) || (pbVar10 = pbVar15, *pbVar15 - 0x3a < 0xfffffff6)) {
            pbVar15 = (byte *)0x0;
            lVar16 = 0;
            puVar13 = (undefined8 *)param_1[0x266];
            lVar8 = puVar13[1];
          }
          else {
            do {
              pbVar11 = pbVar10;
              if (*pbVar10 - 0x3a < 0xfffffff6) break;
              pbVar10 = pbVar10 + 1;
              *param_1 = (long)pbVar10;
              pbVar11 = pbVar7;
            } while (pbVar10 != pbVar7);
            lVar16 = (long)pbVar11 - (long)pbVar15;
            puVar13 = (undefined8 *)param_1[0x266];
            lVar8 = puVar13[1];
          }
          puVar5 = puVar13;
          if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
            puVar5 = malloc(0x1000);
            if (puVar5 == (undefined8 *)0x0) {
LAB_0403b1ec:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar8 = 0;
            *puVar5 = puVar13;
            puVar5[1] = 0;
            param_1[0x266] = (long)puVar5;
          }
          puVar5[1] = lVar8 + 0x20;
          puVar13 = (undefined8 *)((long)puVar5 + lVar8 + 0x10);
          *puVar13 = &UNK_08fae288;
          *(byte **)((long)puVar5 + lVar8 + 0x20) = pbVar15;
          *(long *)((long)puVar5 + lVar8 + 0x28) = lVar16;
          *(undefined1 *)((long)puVar5 + lVar8 + 0x18) = 8;
          *(ushort *)((long)puVar5 + lVar8 + 0x19) =
               *(ushort *)((long)puVar5 + lVar8 + 0x19) & 0xf000 | 0x540;
          plVar1 = (long *)param_1[3];
          if (plVar1 == (long *)param_1[4]) {
            __ptr = (long *)param_1[2];
            __n = (long)plVar1 - (long)__ptr;
            if (__ptr == __src) {
              pvVar6 = malloc(__n * 2);
              if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar1 != __src) {
                memcpy(pvVar6,__src,__n);
              }
              param_1[2] = (long)pvVar6;
            }
            else {
              pvVar6 = realloc(__ptr,__n * 2);
              param_1[2] = (long)pvVar6;
              if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            param_1[3] = (long)((undefined8 *)((long)pvVar6 + __n) + 1);
            param_1[4] = (long)((long)pvVar6 + ((long)__n >> 2) * 8);
            *(undefined8 *)((long)pvVar6 + __n) = puVar13;
            pbVar15 = (byte *)*param_1;
            pbVar7 = (byte *)param_1[1];
            if (pbVar15 == pbVar7) {
              return (undefined8 *)0x0;
            }
          }
          else {
            param_1[3] = (long)(plVar1 + 1);
            *plVar1 = (long)puVar13;
            pbVar15 = (byte *)*param_1;
            pbVar7 = (byte *)param_1[1];
            if (pbVar15 == pbVar7) {
              return (undefined8 *)0x0;
            }
          }
        } while( true );
      }
    }
  }
  return (undefined8 *)0x0;
}

