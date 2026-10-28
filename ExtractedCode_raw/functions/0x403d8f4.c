// rea decompile_all
// name: FUN_0403d8f4
// address: 0x403d8f4
// body: available
// range: 0x403d8f4-0x403df93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x403df40 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403df44 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403df48 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403df6c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403df90 to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_0403d8f4(long *param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  uint __c;
  char cVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  char *pcVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  void *pvVar19;
  byte *pbVar20;
  size_t sVar21;
  long *plVar22;
  long lVar23;
  byte *local_110;
  long lStack_108;
  long local_100;
  undefined1 local_f8 [16];
  long local_e8;
  undefined1 local_e0 [16];
  long local_d0;
  ulong uStack_c8;
  undefined1 *local_c0 [3];
  undefined1 auStack_a8 [72];
  
  if (param_2 != 0) {
    param_1[0x54] = param_1[0x53];
  }
  psVar2 = (short *)*param_1;
  pbVar15 = (byte *)param_1[1];
  if ((ulong)((long)pbVar15 - (long)psVar2) < 2) {
    return (undefined8 *)0x0;
  }
  if (*psVar2 == 0x7455) {
    pbVar12 = (byte *)(psVar2 + 1);
    *param_1 = (long)pbVar12;
    if (pbVar15 == pbVar12) {
      return (undefined8 *)0x0;
    }
    if (*pbVar12 - 0x3a < 0xfffffff6) {
      pbVar20 = (byte *)0x0;
      lVar11 = 0;
    }
    else {
      pbVar20 = (byte *)(psVar2 + 1);
      pbVar16 = pbVar12;
      do {
        pbVar17 = pbVar20;
        pbVar18 = pbVar16;
        if (*pbVar16 - 0x3a < 0xfffffff6) break;
        pbVar16 = pbVar16 + 1;
        pbVar20 = pbVar20 + 1;
        *param_1 = (long)pbVar16;
        pbVar17 = pbVar15;
        pbVar18 = pbVar15;
      } while (pbVar16 != pbVar15);
      lVar11 = (long)pbVar17 - (long)pbVar12;
      pbVar20 = pbVar12;
      pbVar12 = pbVar18;
    }
    if (pbVar12 == pbVar15) {
      return (undefined8 *)0x0;
    }
    if (*pbVar12 != 0x5f) {
      return (undefined8 *)0x0;
    }
    pvVar19 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar12 + 1);
    lVar9 = *(long *)((long)pvVar19 + 8);
    puVar4 = pvVar19;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0403df90;
      lVar9 = 0;
      *puVar4 = pvVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar5 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar5 = &UNK_08faef98;
    *(byte **)((long)puVar4 + lVar9 + 0x20) = pbVar20;
    *(long *)((long)puVar4 + lVar9 + 0x28) = lVar11;
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 0x33;
    *(ushort *)((long)puVar4 + lVar9 + 0x19) =
         *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
    return puVar5;
  }
  if (*psVar2 != 0x6c55) {
    if (*psVar2 != 0x6255) {
      return (undefined8 *)0x0;
    }
    pbVar12 = (byte *)(psVar2 + 1);
    *param_1 = (long)pbVar12;
    if (pbVar15 == pbVar12) {
      return (undefined8 *)0x0;
    }
    if (0xfffffff5 < *pbVar12 - 0x3a) {
      while (0xfffffff5 < *pbVar12 - 0x3a) {
        pbVar12 = pbVar12 + 1;
        *param_1 = (long)pbVar12;
        if (pbVar12 == pbVar15) {
          return (undefined8 *)0x0;
        }
      }
    }
    if (pbVar12 == pbVar15) {
      return (undefined8 *)0x0;
    }
    if (*pbVar12 != 0x5f) {
      return (undefined8 *)0x0;
    }
    pvVar19 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar12 + 1);
    lVar11 = *(long *)((long)pvVar19 + 8);
    puVar4 = pvVar19;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_0403df90;
      lVar11 = 0;
      *puVar4 = pvVar19;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar5 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar5 = &UNK_08fae288;
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    *(ushort *)((long)puVar4 + lVar11 + 0x19) =
         *(ushort *)((long)puVar4 + lVar11 + 0x19) & 0xf000 | 0x540;
    *(char **)((long)puVar4 + lVar11 + 0x20) = "\'block-literal\'";
    *(undefined8 *)((long)puVar4 + lVar11 + 0x28) = 0xf;
    return puVar5;
  }
  lVar23 = param_1[0x62];
  *param_1 = (long)(psVar2 + 1);
  param_1[0x62] = param_1[0x54] - param_1[0x53] >> 3;
  FUN_0403ece4(&local_d0,param_1);
  pcVar6 = (char *)*param_1;
  lVar11 = param_1[2];
  lVar9 = param_1[3];
  uVar13 = param_1[1] - (long)pcVar6;
  if (uVar13 != 0) {
    plVar1 = param_1 + 5;
    while (*pcVar6 == 'T') {
      if (uVar13 < 2) {
        __c = 0;
      }
      else {
        __c = (uint)(byte)pcVar6[1];
      }
      pcVar6 = memchr(&UNK_01a3f4bd,__c,5);
      if ((pcVar6 == (char *)0x0) || (pcVar6 == "")) break;
      lVar7 = FUN_0403ee0c(param_1,local_c0);
      puVar4 = (undefined8 *)0x0;
      if (lVar7 == 0) goto LAB_0403def4;
      plVar22 = (long *)param_1[3];
      if (plVar22 == (long *)param_1[4]) {
        plVar8 = (long *)param_1[2];
        sVar21 = (long)plVar22 - (long)plVar8;
        if (plVar8 == plVar1) {
          pvVar19 = malloc(sVar21 * 2);
          if (pvVar19 == (void *)0x0) goto LAB_0403df6c;
          if (plVar22 != plVar1) {
            memcpy(pvVar19,plVar1,sVar21);
          }
          param_1[2] = (long)pvVar19;
        }
        else {
          pvVar19 = realloc(plVar8,sVar21 * 2);
          param_1[2] = (long)pvVar19;
          if (pvVar19 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar22 = (long *)((long)pvVar19 + sVar21);
        param_1[3] = (long)plVar22;
        param_1[4] = (long)((long)pvVar19 + ((long)sVar21 >> 2) * 8);
      }
      param_1[3] = (long)(plVar22 + 1);
      *plVar22 = lVar7;
      pcVar6 = (char *)*param_1;
      uVar13 = param_1[1] - (long)pcVar6;
      if (uVar13 == 0) break;
    }
  }
  lVar11 = lVar9 - lVar11 >> 3;
  local_e0 = FUN_04034628(param_1,lVar11);
  if (local_e0._8_8_ == 0) {
    if (param_1[0x54] == param_1[0x53]) {
      FUN_0402f618("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x83,
                   "Popping empty vector!");
LAB_0403df90:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    param_1[0x54] = param_1[0x54] + -8;
  }
  pcVar6 = (char *)*param_1;
  pcVar14 = (char *)param_1[1];
  local_e8 = 0;
  if (pcVar6 == pcVar14) {
LAB_0403dc64:
    plVar1 = param_1 + 5;
    do {
      lVar9 = FUN_040324c0(param_1);
      puVar4 = (undefined8 *)0x0;
      if (lVar9 == 0) goto LAB_0403def4;
      plVar22 = (long *)param_1[3];
      if (plVar22 == (long *)param_1[4]) {
        plVar8 = (long *)param_1[2];
        sVar21 = (long)plVar22 - (long)plVar8;
        if (plVar8 == plVar1) {
          pvVar19 = malloc(sVar21 * 2);
          if (pvVar19 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar22 != plVar1) {
            memcpy(pvVar19,plVar1,sVar21);
          }
          param_1[2] = (long)pvVar19;
        }
        else {
          pvVar19 = realloc(plVar8,sVar21 * 2);
          param_1[2] = (long)pvVar19;
          if (pvVar19 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar22 = (long *)((long)pvVar19 + sVar21);
        param_1[3] = (long)plVar22;
        param_1[4] = (long)((long)pvVar19 + ((long)sVar21 >> 2) * 8);
      }
      param_1[3] = (long)(plVar22 + 1);
      *plVar22 = lVar9;
      if ((char *)param_1[1] == (char *)*param_1) {
        cVar10 = '\0';
      }
      else {
        cVar10 = *(char *)*param_1;
        if (cVar10 == 'E') break;
      }
    } while (cVar10 != 'Q');
  }
  else {
    if (*pcVar6 == 'Q') {
      uVar3 = *(undefined1 *)((long)param_1 + 0x30a);
      *param_1 = (long)(pcVar6 + 1);
      *(undefined1 *)((long)param_1 + 0x30a) = 1;
      local_e8 = FUN_0403770c(param_1);
      *(undefined1 *)((long)param_1 + 0x30a) = uVar3;
      puVar4 = (undefined8 *)0x0;
      if (local_e8 == 0) goto LAB_0403def4;
      pcVar6 = (char *)*param_1;
      pcVar14 = (char *)param_1[1];
    }
    if ((pcVar14 == pcVar6) || (*pcVar6 != 'v')) goto LAB_0403dc64;
    *param_1 = (long)(pcVar6 + 1);
  }
  local_f8 = FUN_04034628(param_1,lVar11);
  pbVar15 = (byte *)*param_1;
  pbVar12 = (byte *)param_1[1];
  local_100 = 0;
  if (pbVar15 != pbVar12) {
    if (*pbVar15 == 0x51) {
      uVar3 = *(undefined1 *)((long)param_1 + 0x30a);
      *param_1 = (long)(pbVar15 + 1);
      *(undefined1 *)((long)param_1 + 0x30a) = 1;
      local_100 = FUN_0403770c(param_1);
      *(undefined1 *)((long)param_1 + 0x30a) = uVar3;
      puVar4 = (undefined8 *)0x0;
      if (local_100 == 0) goto LAB_0403def4;
      pbVar15 = (byte *)*param_1;
      pbVar12 = (byte *)param_1[1];
    }
    if ((pbVar15 != pbVar12) && (*pbVar15 == 0x45)) {
      pbVar15 = pbVar15 + 1;
      *param_1 = (long)pbVar15;
      if (pbVar12 != pbVar15) {
        pbVar20 = pbVar15;
        if (*pbVar15 - 0x3a < 0xfffffff6) {
          lStack_108 = 0;
          pbVar16 = pbVar15;
          pbVar15 = (byte *)0x0;
        }
        else {
          do {
            pbVar16 = pbVar20;
            if (*pbVar20 - 0x3a < 0xfffffff6) break;
            pbVar20 = pbVar20 + 1;
            *param_1 = (long)pbVar20;
            pbVar16 = pbVar12;
          } while (pbVar20 != pbVar12);
          lStack_108 = (long)pbVar16 - (long)pbVar15;
        }
        local_110 = pbVar15;
        if ((pbVar16 != pbVar12) && (*pbVar16 == 0x5f)) {
          *param_1 = (long)(pbVar16 + 1);
          puVar4 = (undefined8 *)
                   FUN_0403f30c(param_1,local_e0,&local_e8,local_f8,&local_100,&local_110);
          goto LAB_0403def4;
        }
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_0403def4:
  if (uStack_c8 <= (ulong)(*(long *)(local_d0 + 0x2a0) - *(long *)(local_d0 + 0x298) >> 3)) {
    *(ulong *)(local_d0 + 0x2a0) = *(long *)(local_d0 + 0x298) + uStack_c8 * 8;
    if (local_c0[0] != auStack_a8) {
      free(local_c0[0]);
    }
    param_1[0x62] = lVar23;
    return puVar4;
  }
  FUN_0402f618("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xa50,
               &DAT_01a45042);
LAB_0403df6c:
                    /* WARNING: Subroutine does not return */
  abort();
}

