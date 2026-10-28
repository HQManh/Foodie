// rea decompile_all
// name: FUN_0403ee0c
// address: 0x403ee0c
// body: available
// range: 0x403ee0c-0x403f2cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x403f288 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403f28c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403f290 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403f2c8 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_0403ee0c(long *param_1,undefined8 param_2)

{
  long *__src;
  short *psVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *__ptr;
  void *pvVar9;
  undefined *puVar10;
  char *pcVar11;
  long lVar12;
  undefined1 uVar13;
  char *pcVar14;
  size_t unaff_x23;
  long *plVar15;
  undefined1 auVar16 [16];
  long local_d0;
  ulong uStack_c8;
  undefined1 *local_c0 [3];
  undefined1 auStack_a8 [64];
  long *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  psVar1 = (short *)*param_1;
  local_60 = &local_58;
  if ((ulong)(param_1[1] - (long)psVar1) < 2) {
LAB_0403ee48:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    local_68 = param_1;
    local_58 = param_2;
    if (*psVar1 == 0x7954) {
      *param_1 = (long)(psVar1 + 1);
      uVar7 = FUN_0403f5b8(&local_68,0);
      pvVar9 = (void *)param_1[0x266];
      lVar12 = *(long *)((long)pvVar9 + 8);
      puVar4 = pvVar9;
      if (lVar12 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = malloc(0x1000);
        if (puVar4 == (void *)0x0) {
LAB_0403f288:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar12 = 0;
        *puVar4 = pvVar9;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar12 + 0x20;
      puVar3 = (undefined8 *)((long)puVar4 + lVar12 + 0x10);
      *puVar3 = &UNK_08faf078;
      uVar2 = *(ushort *)((long)puVar4 + lVar12 + 0x19);
      *(undefined8 *)((long)puVar4 + lVar12 + 0x20) = uVar7;
      *(undefined1 *)((long)puVar4 + lVar12 + 0x18) = 0x23;
    }
    else {
      if (*psVar1 == 0x6b54) {
        *param_1 = (long)(psVar1 + 1);
        lVar12 = FUN_040339f8(param_1,0);
        if (lVar12 == 0) {
          return (undefined8 *)0x0;
        }
        lVar5 = FUN_0403f5b8(&local_68,0);
        pvVar9 = (void *)param_1[0x266];
        lVar8 = *(long *)((long)pvVar9 + 8);
        puVar4 = pvVar9;
        if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_0403f288;
          lVar8 = 0;
          *puVar4 = pvVar9;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = (long)puVar4 + lVar8;
        puVar10 = &UNK_08faf0e8;
        *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
        uVar13 = 0x24;
      }
      else {
        if (*psVar1 != 0x6e54) {
          if (*psVar1 == 0x7454) {
            *param_1 = (long)(psVar1 + 1);
            uVar7 = FUN_0403f5b8(&local_68,2);
            lVar12 = param_1[2];
            lVar5 = param_1[3];
            FUN_0403ece4(&local_d0,param_1);
            pcVar11 = (char *)*param_1;
            pcVar14 = (char *)param_1[1];
            __src = param_1 + 5;
            do {
              uVar13 = (undefined1)unaff_x23;
              if ((pcVar11 != pcVar14) && (*pcVar11 == 'E')) {
                lVar8 = 0;
                goto LAB_0403f1b8;
              }
              lVar8 = FUN_0403ee0c(param_1,local_c0);
              puVar4 = (undefined8 *)0x0;
              if (lVar8 == 0) goto LAB_0403f240;
              plVar15 = (long *)param_1[3];
              if (plVar15 == (long *)param_1[4]) {
                __ptr = (long *)param_1[2];
                unaff_x23 = (long)plVar15 - (long)__ptr;
                if (__ptr == __src) {
                  pvVar9 = malloc(unaff_x23 * 2);
                  if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  if (plVar15 != __src) {
                    memcpy(pvVar9,__src,unaff_x23);
                  }
                  param_1[2] = (long)pvVar9;
                }
                else {
                  pvVar9 = realloc(__ptr,unaff_x23 * 2);
                  param_1[2] = (long)pvVar9;
                  if (pvVar9 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                }
                plVar15 = (long *)((long)pvVar9 + unaff_x23);
                param_1[3] = (long)plVar15;
                param_1[4] = (long)((long)pvVar9 + ((long)unaff_x23 >> 2) * 8);
              }
              param_1[3] = (long)(plVar15 + 1);
              *plVar15 = lVar8;
              pcVar11 = (char *)*param_1;
              pcVar14 = (char *)param_1[1];
            } while ((pcVar11 == pcVar14) || (*pcVar11 != 'Q'));
            uVar13 = *(undefined1 *)((long)param_1 + 0x30a);
            *param_1 = (long)(pcVar11 + 1);
            *(undefined1 *)((long)param_1 + 0x30a) = 1;
            lVar8 = FUN_0403770c(param_1);
            *(undefined1 *)((long)param_1 + 0x30a) = uVar13;
            if ((lVar8 == 0) ||
               ((pcVar11 = (char *)*param_1, pcVar11 == (char *)param_1[1] || (*pcVar11 != 'E')))) {
              puVar4 = (undefined8 *)0x0;
            }
            else {
LAB_0403f1b8:
              *param_1 = (long)(pcVar11 + 1);
              auVar16 = FUN_04034628(param_1,lVar5 - lVar12 >> 3);
              uVar13 = auVar16[0];
              pvVar9 = (void *)param_1[0x266];
              lVar12 = *(long *)((long)pvVar9 + 8);
              puVar3 = pvVar9;
              if (lVar12 - 0xfc0U < 0xfffffffffffff010) {
                puVar3 = malloc(0x1000);
                if (puVar3 == (void *)0x0) goto LAB_0403f288;
                lVar12 = 0;
                *puVar3 = pvVar9;
                puVar3[1] = 0;
                param_1[0x266] = (long)puVar3;
              }
              *(long *)((long)puVar3 + 8) = lVar12 + 0x30;
              puVar4 = (undefined8 *)((long)puVar3 + lVar12 + 0x10);
              *puVar4 = &UNK_08faf1c8;
              *(undefined1 *)((long)puVar3 + lVar12 + 0x18) = 0x26;
              *(undefined8 *)((long)puVar3 + lVar12 + 0x20) = uVar7;
              *(undefined1 (*) [16])((long)puVar3 + lVar12 + 0x28) = auVar16;
              *(long *)((long)puVar3 + lVar12 + 0x38) = lVar8;
              *(ushort *)((long)puVar3 + lVar12 + 0x19) =
                   *(ushort *)((long)puVar3 + lVar12 + 0x19) & 0xf000 | 0x500;
            }
LAB_0403f240:
            if ((ulong)(*(long *)(local_d0 + 0x2a0) - *(long *)(local_d0 + 0x298) >> 3) < uStack_c8)
            {
              uVar7 = FUN_0402f618("%s:%d: %s",
                                   "out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xa50
                                   ,&DAT_01a45042);
              *(undefined1 *)((long)param_1 + 0x30a) = uVar13;
              FUN_0403f3ec(&local_d0);
                    /* WARNING: Subroutine does not return */
              FUN_0404c2dc(uVar7);
            }
            *(ulong *)(local_d0 + 0x2a0) = *(long *)(local_d0 + 0x298) + uStack_c8 * 8;
            if (local_c0[0] == auStack_a8) {
              return puVar4;
            }
            free(local_c0[0]);
            return puVar4;
          }
          if (*psVar1 == 0x7054) {
            *param_1 = (long)(psVar1 + 1);
            local_d0 = FUN_0403ee0c(param_1);
            if (local_d0 == 0) {
              return (undefined8 *)0x0;
            }
            puVar4 = (undefined8 *)FUN_0403f708(param_1,&local_d0);
            return puVar4;
          }
          goto LAB_0403ee48;
        }
        *param_1 = (long)(psVar1 + 1);
        lVar12 = FUN_0403f5b8(&local_68,1);
        lVar5 = FUN_040324c0(param_1);
        if (lVar5 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar9 = (void *)param_1[0x266];
        lVar8 = *(long *)((long)pvVar9 + 8);
        puVar4 = pvVar9;
        if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
          puVar4 = malloc(0x1000);
          if (puVar4 == (void *)0x0) goto LAB_0403f288;
          lVar8 = 0;
          *puVar4 = pvVar9;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = (long)puVar4 + lVar8;
        puVar10 = &UNK_08faf158;
        *(long *)((long)puVar4 + 8) = lVar8 + 0x20;
        uVar13 = 0x25;
      }
      puVar3 = (undefined8 *)(lVar6 + 0x10);
      *puVar3 = puVar10;
      uVar2 = *(ushort *)(lVar6 + 0x19);
      *(undefined1 *)(lVar6 + 0x18) = uVar13;
      *(long *)(lVar6 + 0x20) = lVar12;
      *(long *)(lVar6 + 0x28) = lVar5;
    }
    *(ushort *)((long)puVar3 + 9) = uVar2 & 0xf000 | 0x500;
  }
  return puVar3;
}

