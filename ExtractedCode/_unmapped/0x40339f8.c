// rea decompile_all
// name: FUN_040339f8
// address: 0x40339f8
// body: available
// range: 0x40339f8-0x4034113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4033ae4 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4034104 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4034108 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403410c to 0x89db8a0 std::terminate (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4034110 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_040339f8(long *param_1,long param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  size_t sVar15;
  long *plVar16;
  void *pvVar17;
  long *plVar18;
  long local_110;
  ulong local_108 [19];
  long local_70 [2];
  
  pbVar2 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  if (pbVar13 == pbVar2) {
LAB_04033a78:
    local_108[0] = local_108[0] & 0xffffffffffffff00;
    puVar5 = (undefined8 *)FUN_04035c4c(param_1,param_2,local_108);
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) {
      if ((char)local_108[0] != '\0') {
        return (undefined8 *)0x0;
      }
      return puVar5;
    }
    if ((char)local_108[0] == '\0') {
      plVar16 = (long *)param_1[0x26];
      if (plVar16 == (long *)param_1[0x27]) {
        plVar8 = (long *)param_1[0x25];
        plVar18 = param_1 + 0x28;
        sVar15 = (long)plVar16 - (long)plVar8;
        if (plVar8 == plVar18) {
          pvVar17 = malloc(sVar15 * 2);
          if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar16 != plVar18) {
            memcpy(pvVar17,plVar18,sVar15);
          }
          param_1[0x25] = (long)pvVar17;
        }
        else {
          pvVar17 = realloc(plVar8,sVar15 * 2);
          param_1[0x25] = (long)pvVar17;
          if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar16 = (long *)((long)pvVar17 + sVar15);
        param_1[0x26] = (long)plVar16;
        param_1[0x27] = (long)((long)pvVar17 + ((long)sVar15 >> 2) * 8);
      }
      param_1[0x26] = (long)(plVar16 + 1);
      *plVar16 = (long)puVar5;
    }
    lVar6 = FUN_04035dcc(param_1,param_2 != 0);
    if (lVar6 == 0) {
      return (undefined8 *)0x0;
    }
    if (param_2 != 0) {
      *(undefined1 *)(param_2 + 1) = 1;
    }
    puVar9 = (undefined8 *)param_1[0x266];
    lVar11 = *(long *)((long)puVar9 + 8);
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar7 = malloc(0x1000);
      if (puVar7 == (void *)0x0) {
LAB_0403410c:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar11 = 0;
      *puVar7 = puVar9;
      puVar7[1] = 0;
      param_1[0x266] = (long)puVar7;
      puVar9 = puVar7;
    }
    *(long *)((long)puVar9 + 8) = lVar11 + 0x20;
    puVar7 = (undefined8 *)((long)puVar9 + lVar11 + 0x10);
    *puVar7 = &UNK_08fb0188;
    *(undefined8 **)((long)puVar9 + lVar11 + 0x20) = puVar5;
    *(long *)((long)puVar9 + lVar11 + 0x28) = lVar6;
    *(undefined1 *)((long)puVar9 + lVar11 + 0x18) = 0x2d;
    *(ushort *)((long)puVar9 + lVar11 + 0x19) =
         *(ushort *)((long)puVar9 + lVar11 + 0x19) & 0xf000 | 0x540;
    return puVar7;
  }
  if (*pbVar2 != 0x5a) {
    if (*pbVar2 != 0x4e) goto LAB_04033a78;
    pbVar12 = pbVar2 + 1;
    *param_1 = (long)pbVar12;
    pbVar10 = pbVar13;
    if (pbVar12 == pbVar13) {
      uVar14 = 0;
    }
    else {
      if (*pbVar12 == 0x48) {
        pbVar10 = pbVar2 + 2;
        *param_1 = (long)pbVar10;
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 0x18) = 1;
        }
        goto LAB_04033c0c;
      }
      if (*pbVar12 == 0x72) {
        pbVar12 = pbVar2 + 2;
        uVar14 = 4;
        *param_1 = (long)pbVar12;
      }
      else {
        uVar14 = 0;
      }
      if (pbVar12 != pbVar13) {
        if (*pbVar12 == 0x56) {
          pbVar12 = pbVar12 + 1;
          uVar14 = uVar14 | 2;
          *param_1 = (long)pbVar12;
        }
        if ((pbVar12 != pbVar13) && (pbVar10 = pbVar12, *pbVar12 == 0x4b)) {
          uVar14 = uVar14 | 1;
          *param_1 = (long)(pbVar12 + 1);
          pbVar10 = pbVar12 + 1;
        }
      }
    }
    if (param_2 != 0) {
      *(uint *)(param_2 + 4) = uVar14;
    }
    if (pbVar10 != pbVar13) {
      if (*pbVar10 == 0x4f) {
        pbVar10 = pbVar10 + 1;
        *param_1 = (long)pbVar10;
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 8) = 2;
        }
        goto LAB_04033c0c;
      }
      if (*pbVar10 == 0x52) {
        pbVar10 = pbVar10 + 1;
        *param_1 = (long)pbVar10;
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 8) = 1;
        }
        goto LAB_04033c0c;
      }
    }
    if (param_2 != 0) {
      *(undefined1 *)(param_2 + 8) = 0;
    }
LAB_04033c0c:
    plVar16 = param_1 + 0x28;
    puVar5 = (undefined8 *)0x0;
LAB_04033c28:
    do {
      if ((pbVar10 != pbVar13) && (*pbVar10 == 0x45)) {
        *param_1 = (long)(pbVar10 + 1);
        if (puVar5 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        if (param_1[0x25] == param_1[0x26]) {
          return (undefined8 *)0x0;
        }
        param_1[0x26] = param_1[0x26] + -8;
        return puVar5;
      }
      if (param_2 != 0) {
        *(undefined1 *)(param_2 + 1) = 0;
      }
      if (pbVar13 == pbVar10) {
LAB_04033d44:
        puVar9 = (undefined8 *)0x0;
        goto LAB_04033d48;
      }
      bVar4 = *pbVar10;
      puVar9 = (undefined8 *)0x0;
      if (bVar4 < 0x53) {
        if (bVar4 == 0x44) {
          if (((ulong)((long)pbVar13 - (long)pbVar10) < 2) || ((pbVar10[1] | 0x20) != 0x74))
          goto LAB_04033d44;
          if (puVar5 != (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar9 = (undefined8 *)FUN_040367e0(param_1);
LAB_04033d58:
          if (puVar9 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        }
        else {
          if (bVar4 != 0x49) goto LAB_04033d48;
          if (puVar5 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          lVar6 = FUN_04035dcc(param_1,param_2 != 0);
          if (lVar6 == 0) {
            return (undefined8 *)0x0;
          }
          if (*(char *)(puVar5 + 1) == '-') {
            return (undefined8 *)0x0;
          }
          if (param_2 != 0) {
            *(undefined1 *)(param_2 + 1) = 1;
          }
          pvVar17 = (void *)param_1[0x266];
          lVar11 = *(long *)((long)pvVar17 + 8);
          puVar7 = pvVar17;
          if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
            puVar7 = malloc(0x1000);
            if (puVar7 == (void *)0x0) goto LAB_0403410c;
            lVar11 = 0;
            *puVar7 = pvVar17;
            puVar7[1] = 0;
            param_1[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar11 + 0x20;
          puVar9 = (undefined8 *)((long)puVar7 + lVar11 + 0x10);
          *puVar9 = &UNK_08fb0188;
          *(undefined8 **)((long)puVar7 + lVar11 + 0x20) = puVar5;
          *(long *)((long)puVar7 + lVar11 + 0x28) = lVar6;
          *(undefined1 *)((long)puVar7 + lVar11 + 0x18) = 0x2d;
          *(ushort *)((long)puVar7 + lVar11 + 0x19) =
               *(ushort *)((long)puVar7 + lVar11 + 0x19) & 0xf000 | 0x540;
        }
        plVar18 = (long *)param_1[0x26];
        if (plVar18 == (long *)param_1[0x27]) {
          plVar8 = (long *)param_1[0x25];
          sVar15 = (long)plVar18 - (long)plVar8;
          if (plVar8 == plVar16) {
            pvVar17 = malloc(sVar15 * 2);
            if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar18 != plVar16) {
              memcpy(pvVar17,plVar16,sVar15);
            }
            param_1[0x25] = (long)pvVar17;
          }
          else {
            pvVar17 = realloc(plVar8,sVar15 * 2);
            param_1[0x25] = (long)pvVar17;
            if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar18 = (long *)((long)pvVar17 + sVar15);
          param_1[0x26] = (long)plVar18;
          param_1[0x27] = (long)((long)pvVar17 + ((long)sVar15 >> 2) * 8);
        }
        param_1[0x26] = (long)(plVar18 + 1);
        *plVar18 = (long)puVar9;
        pbVar10 = (byte *)*param_1;
        pbVar2 = (byte *)param_1[1];
        pbVar13 = pbVar10;
        puVar5 = puVar9;
        if ((pbVar10 != pbVar2) && (pbVar13 = pbVar2, *pbVar10 == 0x4d)) {
          pbVar10 = pbVar10 + 1;
          *param_1 = (long)pbVar10;
        }
        goto LAB_04033c28;
      }
      if (bVar4 != 0x53) {
        if (bVar4 == 0x54) {
          if (puVar5 != (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar9 = (undefined8 *)FUN_04036410(param_1);
          goto LAB_04033d58;
        }
LAB_04033d48:
        puVar9 = (undefined8 *)FUN_04036c00(param_1,param_2,puVar5,puVar9);
        goto LAB_04033d58;
      }
      if (((ulong)((long)pbVar13 - (long)pbVar10) < 2) || (pbVar10[1] != 0x74)) {
        puVar9 = (undefined8 *)FUN_04036924(param_1);
        if (puVar9 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
      }
      else {
        pvVar17 = (void *)param_1[0x266];
        *param_1 = (long)(pbVar10 + 2);
        lVar6 = *(long *)((long)pvVar17 + 8);
        puVar7 = pvVar17;
        if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
          puVar7 = malloc(0x1000);
          if (puVar7 == (void *)0x0) goto LAB_0403410c;
          lVar6 = 0;
          *puVar7 = pvVar17;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar6 + 0x20;
        puVar9 = (undefined8 *)((long)puVar7 + lVar6 + 0x10);
        *puVar9 = &UNK_08fae288;
        *(undefined1 *)((long)puVar7 + lVar6 + 0x18) = 8;
        *(ushort *)((long)puVar7 + lVar6 + 0x19) =
             *(ushort *)((long)puVar7 + lVar6 + 0x19) & 0xf000 | 0x540;
        *(undefined **)((long)puVar7 + lVar6 + 0x20) = &UNK_01a73054;
        *(undefined8 *)((long)puVar7 + lVar6 + 0x28) = 3;
      }
      if (*(char *)(puVar9 + 1) == '\x1b') goto LAB_04033d48;
      if (puVar5 != (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      pbVar10 = (byte *)*param_1;
      pbVar13 = (byte *)param_1[1];
      puVar5 = puVar9;
    } while( true );
  }
  *param_1 = (long)(pbVar2 + 1);
  local_70[0] = FUN_040318a8(param_1);
  if (local_70[0] == 0) {
    return (undefined8 *)0x0;
  }
  pcVar3 = (char *)*param_1;
  if (pcVar3 == (char *)param_1[1]) {
    return (undefined8 *)0x0;
  }
  if (*pcVar3 != 'E') {
    return (undefined8 *)0x0;
  }
  pcVar1 = pcVar3 + 1;
  *param_1 = (long)pcVar1;
  if ((pcVar1 != (char *)param_1[1]) && (*pcVar1 == 's')) {
    *param_1 = (long)(pcVar3 + 2);
    lVar6 = FUN_04044744();
    *param_1 = lVar6;
    local_108[0] = FUN_040447f4(param_1,"string literal");
    puVar5 = (undefined8 *)FUN_0404489c(param_1,local_70,local_108);
    return puVar5;
  }
  FUN_04033844(local_108,param_1);
  pcVar3 = (char *)*param_1;
  if ((pcVar3 == (char *)param_1[1]) || (*pcVar3 != 'd')) {
    local_110 = FUN_040339f8(param_1,param_2);
    if (local_110 != 0) {
      lVar6 = FUN_04044744(*param_1,param_1[1]);
      *param_1 = lVar6;
LAB_04033fc0:
      puVar5 = (undefined8 *)FUN_0404489c(param_1,local_70,&local_110);
      goto LAB_04033fdc;
    }
  }
  else {
    *param_1 = (long)(pcVar3 + 1);
    FUN_04032380(param_1,1);
    pcVar3 = (char *)*param_1;
    if ((pcVar3 != (char *)param_1[1]) && (*pcVar3 == '_')) {
      *param_1 = (long)(pcVar3 + 1);
      local_110 = FUN_040339f8(param_1,param_2);
      if (local_110 != 0) goto LAB_04033fc0;
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_04033fdc:
  FUN_04034878(local_108);
  return puVar5;
}

