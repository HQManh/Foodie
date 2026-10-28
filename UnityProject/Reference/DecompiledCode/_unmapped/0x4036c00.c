// rea decompile_all
// name: FUN_04036c00
// address: 0x4036c00
// body: available
// range: 0x4036c00-0x40371df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40371d4 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40371d8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40371dc to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_04036c00(long *param_1,undefined1 *param_2,undefined8 *param_3,long param_4)

{
  long *__src;
  bool bVar1;
  char *pcVar2;
  byte bVar3;
  ushort uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *__ptr;
  undefined8 uVar10;
  bool bVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  byte *pbVar16;
  undefined1 uVar17;
  byte *pbVar18;
  void *pvVar19;
  size_t __n;
  long *plVar20;
  undefined1 auVar21 [16];
  long local_60;
  undefined8 *local_58;
  
  local_60 = param_4;
  local_58 = param_3;
  uVar5 = FUN_04035390(param_1,&local_60);
  if ((uVar5 & 1) != 0) goto LAB_04036c3c;
  pbVar12 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  if (param_3 == (undefined8 *)0x0) {
LAB_04036c78:
    bVar1 = true;
    if (pbVar12 == pbVar16) goto LAB_04036e08;
LAB_04036c84:
    if (*pbVar12 == 0x4c) {
      pbVar12 = pbVar12 + 1;
      *param_1 = (long)pbVar12;
    }
    if ((pbVar16 != pbVar12) && (bVar3 = *pbVar12, 0x30 < bVar3)) {
      if (bVar3 < 0x3a) {
        puVar7 = (undefined8 *)FUN_04035818(param_1);
        lVar14 = local_60;
      }
      else {
        if (bVar3 != 0x55) goto LAB_04036d04;
        puVar7 = (undefined8 *)FUN_0403d8f4(param_1,param_2);
        lVar14 = local_60;
      }
      goto joined_r0x04036fe8;
    }
LAB_04036d04:
    if ((1 < (ulong)((long)pbVar16 - (long)pbVar12)) && (*(short *)pbVar12 == 0x4344)) {
      lVar14 = param_1[2];
      lVar13 = param_1[3];
      *param_1 = (long)(pbVar12 + 2);
      lVar9 = FUN_04035818(param_1);
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      __src = param_1 + 5;
      while( true ) {
        plVar20 = (long *)param_1[3];
        if (plVar20 == (long *)param_1[4]) {
          __ptr = (long *)param_1[2];
          __n = (long)plVar20 - (long)__ptr;
          if (__ptr == __src) {
            pvVar19 = malloc(__n * 2);
            if (pvVar19 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar20 != __src) {
              memcpy(pvVar19,__src,__n);
            }
            param_1[2] = (long)pvVar19;
          }
          else {
            pvVar19 = realloc(__ptr,__n * 2);
            param_1[2] = (long)pvVar19;
            if (pvVar19 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar20 = (long *)((long)pvVar19 + __n);
          param_1[4] = (long)((long)pvVar19 + ((long)__n >> 2) * 8);
        }
        param_1[3] = (long)(plVar20 + 1);
        *plVar20 = lVar9;
        pcVar2 = (char *)*param_1;
        if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) break;
        lVar9 = FUN_04035818(param_1);
        if (lVar9 == 0) {
          return (undefined8 *)0x0;
        }
      }
      *param_1 = (long)(pcVar2 + 1);
      auVar21 = FUN_04034628(param_1,lVar13 - lVar14 >> 3);
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar8 = pvVar19;
      if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) goto LAB_040371d4;
        lVar14 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar14 + 0x20;
      puVar7 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
      *puVar7 = &UNK_08fafe08;
      *(undefined1 (*) [16])((long)puVar8 + lVar14 + 0x20) = auVar21;
      *(undefined1 *)((long)puVar8 + lVar14 + 0x18) = 0x35;
      *(ushort *)((long)puVar8 + lVar14 + 0x19) =
           *(ushort *)((long)puVar8 + lVar14 + 0x19) & 0xf000 | 0x540;
      lVar14 = local_60;
      goto joined_r0x04036fe8;
    }
    if ((pbVar16 == pbVar12) || (1 < *pbVar12 - 0x43)) goto LAB_04036e08;
    if (param_3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (local_60 != 0) {
      return (undefined8 *)0x0;
    }
    puVar8 = param_3;
    if (*(char *)(param_3 + 1) == '0') {
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar8 = pvVar19;
      if (lVar14 - 0xfe0U < 0xfffffffffffff010) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) goto LAB_040371d4;
        lVar14 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar14 + 0x10;
      puVar8 = (undefined8 *)(lVar14 + 0x10 + (long)puVar8);
      *(undefined1 *)(puVar8 + 1) = 0x2f;
      *(undefined4 *)((long)puVar8 + 0xc) = *(undefined4 *)((long)param_3 + 0xc);
      *(ushort *)((long)puVar8 + 9) = *(ushort *)((long)puVar8 + 9) & 0xf000 | 0x540;
      *puVar8 = &UNK_08fafd40;
      pbVar12 = (byte *)*param_1;
      pbVar16 = (byte *)param_1[1];
      local_58 = puVar8;
    }
    if (pbVar12 != pbVar16) {
      if (*pbVar12 == 0x43) {
        pbVar18 = pbVar12 + 1;
        *param_1 = (long)pbVar18;
        if (pbVar18 == pbVar16) {
          bVar11 = false;
          pbVar18 = pbVar16;
        }
        else if (*pbVar18 == 0x49) {
          bVar11 = true;
          *param_1 = (long)(pbVar12 + 2);
          pbVar18 = pbVar12 + 2;
        }
        else {
          bVar11 = false;
        }
        if ((pbVar16 == pbVar18) || (uVar15 = (uint)*pbVar18, 4 < uVar15 - 0x31)) goto LAB_04036c3c;
        *param_1 = (long)(pbVar18 + 1);
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
        if ((bVar11) && (lVar14 = FUN_040339f8(param_1,param_2), lVar14 == 0)) {
          return (undefined8 *)0x0;
        }
        uVar10 = 0;
      }
      else {
        if ((ulong)((long)pbVar16 - (long)pbVar12) < 2) {
          return (undefined8 *)0x0;
        }
        if (*pbVar12 != 0x44) {
          return (undefined8 *)0x0;
        }
        bVar3 = pbVar12[1];
        if (0x35 < bVar3) {
          return (undefined8 *)0x0;
        }
        if ((1L << ((ulong)bVar3 & 0x3f) & 0x37000000000000U) == 0) {
          return (undefined8 *)0x0;
        }
        uVar15 = (uint)bVar3;
        *param_1 = (long)(pbVar12 + 2);
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
        uVar10 = 1;
      }
      puVar7 = (undefined8 *)FUN_04044208(param_1,&local_58,uVar10,uVar15 - 0x30);
      param_3 = puVar8;
      lVar14 = local_60;
      goto joined_r0x04036fe8;
    }
LAB_04036c3c:
    puVar6 = (undefined8 *)0x0;
  }
  else {
    if (pbVar12 == pbVar16) {
      bVar1 = true;
      puVar7 = (undefined8 *)FUN_04043124(param_1,param_2);
      lVar14 = local_60;
      goto joined_r0x04036fe8;
    }
    if (*pbVar12 != 0x46) goto LAB_04036c78;
    bVar1 = false;
    pbVar12 = pbVar12 + 1;
    *param_1 = (long)pbVar12;
    if (pbVar12 != pbVar16) goto LAB_04036c84;
LAB_04036e08:
    puVar7 = (undefined8 *)FUN_04043124(param_1,param_2);
    lVar14 = local_60;
joined_r0x04036fe8:
    local_60 = lVar14;
    if ((puVar7 == (undefined8 *)0x0) || (lVar14 == 0)) {
      if (puVar7 == (undefined8 *)0x0) goto LAB_04036c3c;
    }
    else {
      pvVar19 = (void *)param_1[0x266];
      lVar13 = *(long *)((long)pvVar19 + 8);
      puVar8 = pvVar19;
      if (lVar13 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) goto LAB_040371d4;
        lVar13 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar13 + 0x20;
      puVar6 = (undefined8 *)((long)puVar8 + lVar13 + 0x10);
      *puVar6 = &UNK_08fafee8;
      *(long *)((long)puVar8 + lVar13 + 0x20) = lVar14;
      *(undefined8 **)((long)puVar8 + lVar13 + 0x28) = puVar7;
      *(undefined1 *)((long)puVar8 + lVar13 + 0x18) = 0x1c;
      *(ushort *)((long)puVar8 + lVar13 + 0x19) =
           *(ushort *)((long)puVar8 + lVar13 + 0x19) & 0xf000 | 0x540;
      puVar7 = puVar6;
    }
    puVar7 = (undefined8 *)FUN_04043828(param_1,puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      bVar1 = true;
    }
    if (bVar1) {
      if (param_3 == (undefined8 *)0x0) {
        return puVar7;
      }
      if (puVar7 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar8 = pvVar19;
      if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) {
LAB_040371d4:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar14 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar14 + 0x20;
      puVar6 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
      *puVar6 = &UNK_08faffc8;
      uVar4 = *(ushort *)((long)puVar8 + lVar14 + 0x19);
      uVar17 = 0x18;
    }
    else {
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar8 = pvVar19;
      if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = malloc(0x1000);
        if (puVar8 == (void *)0x0) goto LAB_040371d4;
        lVar14 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar14 + 0x20;
      puVar6 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
      *puVar6 = &UNK_08faff58;
      uVar4 = *(ushort *)((long)puVar8 + lVar14 + 0x19);
      uVar17 = 0x19;
    }
    puVar6[2] = param_3;
    puVar6[3] = puVar7;
    *(undefined1 *)(puVar6 + 1) = uVar17;
    *(ushort *)((long)puVar6 + 9) = uVar4 & 0xf000 | 0x540;
  }
  return puVar6;
}

