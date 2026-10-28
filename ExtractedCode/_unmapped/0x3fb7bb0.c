// rea decompile_all
// name: FUN_03fb7bb0
// address: 0x3fb7bb0
// body: available
// range: 0x3fb7bb0-0x3fb81b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fb81b4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fb7bb0(undefined8 *param_1,int param_2,ulong param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  size_t sVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint *puVar16;
  size_t sVar17;
  char *pcVar18;
  char *pcVar19;
  undefined8 local_78;
  undefined1 local_70 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  bVar2 = *(byte *)((long)param_1 + 10);
  local_70[0] = 0;
  local_78 = 0;
  if (bVar2 < 0x14) {
    if (bVar2 != 0xf) {
      if (bVar2 == 0x13) goto LAB_03fb7c94;
LAB_03fb7d80:
      plVar6 = (long *)FUN_03fbe574(param_1,1);
      FUN_03fbea4c();
      lVar5 = FUN_03fc1a78(plVar6);
      if (lVar5 == 0) {
        puVar12 = &local_78;
        if (*(char *)plVar6[3] != '\0') {
          (*param_4)((char *)plVar6[3],param_5);
          uVar9 = 0x2e;
          goto LAB_03fb7df4;
        }
      }
      else {
        FUN_03fb7bb0(lVar5 + 0x20,param_2,1,param_4,param_5);
        uVar9 = 0x2e;
        if (param_2 != 0) {
          uVar9 = 0x2b;
        }
LAB_03fb7df4:
        puVar12 = (undefined8 *)((ulong)&local_78 | 1);
        local_78 = CONCAT71(local_78._1_7_,uVar9);
      }
      pcVar13 = (char *)plVar6[2];
      if (param_2 == 0) {
        pcVar19 = strchr(pcVar13,0x60);
        if (pcVar19 == (char *)0x0) {
          sVar8 = strlen(pcVar13);
        }
        else {
          sVar8 = (long)pcVar19 - (long)pcVar13;
        }
        if (sVar8 != 0) {
          sVar17 = 0;
          puVar14 = puVar12;
          do {
            puVar12 = (undefined8 *)((long)puVar14 + 1);
            *(undefined1 *)puVar14 = *(undefined1 *)(plVar6[2] + sVar17);
            if (local_70 + (-8 - (long)puVar12) == (undefined1 *)0xfffffffffffffff8) {
              puVar12 = &local_78;
              (*param_4)(&local_78,param_5);
              local_78 = 0;
            }
            sVar17 = sVar17 + 1;
            puVar14 = puVar12;
          } while (sVar8 != sVar17);
        }
      }
      else {
        (*param_4)(pcVar13,param_5);
      }
      if (&local_78 != puVar12) {
        (*param_4)(&local_78,param_5);
        local_78 = 0;
      }
      if ((param_3 & 1) != 0) goto LAB_03fb8184;
      if (plVar6[0xc] == 0) {
        uVar15 = FUN_03fbf77c(plVar6);
        pcVar13 = (char *)&local_78;
        if ((param_2 - 4U < 0xfffffffe) && ((uVar15 & 1) != 0)) {
          lVar5 = plVar6[0x1e];
          uVar9 = 0x3c;
          if (param_2 != 0) {
            uVar9 = 0x5b;
          }
          pcVar19 = (char *)((ulong)&local_78 | 1);
          local_78 = CONCAT71(local_78._1_7_,uVar9);
          uVar4 = thunk_FUN_03fac998();
          if (uVar4 != 0) {
            uVar11 = 0;
            do {
              pcVar13 = pcVar19;
              if (uVar11 != 0) {
                pcVar13 = pcVar19 + 1;
                *pcVar19 = ',';
              }
              thunk_FUN_03fac7e4(lVar5,uVar11 & 0xffff);
              pcVar18 = (char *)thunk_FUN_03fac9f4();
              sVar8 = strlen(pcVar18);
              pcVar19 = pcVar13;
              for (; sVar8 != 0; sVar8 = sVar8 - 1) {
                pcVar13 = pcVar19 + 1;
                *pcVar19 = *pcVar18;
                if ((long)(local_70 + -(long)pcVar13) < 2) {
                  pcVar13 = (char *)&local_78;
                  (*param_4)(&local_78,param_5);
                  local_78 = 0;
                }
                pcVar18 = pcVar18 + 1;
                pcVar19 = pcVar13;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar4);
          }
          goto LAB_03fb8134;
        }
      }
      else {
        iVar1 = 3;
        if (param_2 != 2) {
          iVar1 = param_2;
        }
        puVar16 = *(uint **)(plVar6[0xc] + 8);
        uVar9 = 0x3c;
        if (param_2 != 0) {
          uVar9 = 0x5b;
        }
        local_78 = CONCAT71(local_78._1_7_,uVar9);
        pcVar13 = (char *)((ulong)&local_78 | 1);
        pcVar19 = pcVar13;
        if (*puVar16 != 0) {
          uVar15 = 0;
          do {
            lVar5 = *(long *)(*(long *)(puVar16 + 2) + uVar15 * 8);
            pcVar18 = pcVar19;
            if (uVar15 != 0) {
              pcVar18 = pcVar19 + 1;
              *pcVar19 = ',';
            }
            if (iVar1 == 3) {
              if ((*(char *)(lVar5 + 10) != '\x13') && (*(char *)((long)param_1 + 10) != '\x1e')) {
                *pcVar18 = '[';
              }
              (*param_4)(&local_78,param_5);
              local_78 = 0;
              FUN_03fb7bb0(*(undefined8 *)(*(long *)(puVar16 + 2) + uVar15 * 8),3,0,param_4,param_5)
              ;
              pcVar19 = (char *)&local_78;
              if (*(char *)(lVar5 + 10) != '\x13') {
                if (*(char *)((long)param_1 + 10) == '\x1e') {
                  pcVar19 = (char *)&local_78;
                }
                else {
                  local_78 = CONCAT71(local_78._1_7_,0x5d);
                  pcVar19 = pcVar13;
                }
              }
            }
            else {
              pcVar19 = (char *)&local_78;
              (*param_4)(&local_78,param_5);
              local_78 = 0;
              FUN_03fb7bb0(*(undefined8 *)(*(long *)(puVar16 + 2) + uVar15 * 8),iVar1,0,param_4,
                           param_5);
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < *puVar16);
        }
LAB_03fb8134:
        cVar10 = '>';
        if (param_2 != 0) {
          cVar10 = ']';
        }
        pcVar13 = pcVar19 + 1;
        *pcVar19 = cVar10;
      }
      if ((*(byte *)((long)param_1 + 0xb) >> 5 & 1) != 0) {
        *pcVar13 = '&';
      }
      (*param_4)(&local_78,param_5);
      local_78 = 0;
      if (((param_2 != 3) || (*(char *)((long)param_1 + 10) == '\x13')) ||
         (*(char *)((long)param_1 + 10) == '\x1e')) goto LAB_03fb8184;
      goto LAB_03fb7ea0;
    }
    iVar1 = 2;
    if (param_2 != 3) {
      iVar1 = param_2;
    }
    FUN_03fb7bb0(*param_1,iVar1,0,param_4,param_5);
    uVar7 = local_78;
    local_78 = CONCAT71(local_78._1_7_,0x2a);
    if ((*(byte *)((long)param_1 + 0xb) >> 5 & 1) != 0) {
      local_78._2_6_ = SUB86(uVar7,2);
      local_78 = CONCAT62(local_78._2_6_,0x262a);
    }
    (*param_4)(&local_78,param_5);
    local_78 = 0;
    if (param_2 != 3) goto LAB_03fb8184;
    plVar6 = (long *)FUN_03fbe574(*param_1,1);
    lVar5 = *(long *)(*plVar6 + 0x10);
  }
  else {
    if (bVar2 == 0x1e) {
LAB_03fb7c94:
      thunk_FUN_03f98700(param_1);
      uVar7 = thunk_FUN_03fac9f4();
      (*param_4)(uVar7,param_5);
      if ((*(byte *)((long)param_1 + 0xb) >> 5 & 1) != 0) {
        local_78 = CONCAT71(local_78._1_7_,0x26);
        (*param_4)(&local_78,param_5);
      }
      goto LAB_03fb8184;
    }
    if (bVar2 == 0x1d) {
      plVar6 = (long *)FUN_03fbe574(*param_1,1);
      iVar1 = 2;
      if (param_2 != 3) {
        iVar1 = param_2;
      }
      FUN_03fb7bb0(plVar6 + 4,iVar1,0,param_4,param_5);
      uVar7 = local_78;
      local_78 = CONCAT62(local_78._2_6_,0x5d5b);
      if ((*(byte *)((long)param_1 + 0xb) >> 5 & 1) != 0) {
        local_78 = CONCAT53(SUB85(uVar7,3),0x265d5b);
      }
    }
    else {
      if (bVar2 != 0x14) goto LAB_03fb7d80;
      lVar5 = FUN_03fbe574(param_1,1);
      plVar6 = (long *)FUN_03fbeb18();
      iVar1 = 2;
      if (param_2 != 3) {
        iVar1 = param_2;
      }
      FUN_03fb7bb0(plVar6 + 4,iVar1,0,param_4,param_5);
      uVar7 = local_78;
      puVar12 = (undefined8 *)((ulong)&local_78 | 1);
      local_78 = CONCAT71(local_78._1_7_,0x5b);
      if (*(char *)(lVar5 + 0x132) != '\0') {
        if (*(char *)(lVar5 + 0x132) == '\x01') {
          puVar12 = (undefined8 *)((ulong)&local_78 | 2);
          local_78._2_6_ = SUB86(uVar7,2);
          local_78 = CONCAT62(local_78._2_6_,0x2a5b);
        }
        else {
          uVar4 = 1;
          puVar14 = puVar12;
          do {
            puVar12 = (undefined8 *)((long)puVar14 + 1);
            *(undefined1 *)puVar14 = 0x2c;
            if ((long)(local_70 + -(long)puVar12) < 2) {
              puVar12 = &local_78;
              (*param_4)(&local_78,param_5);
              local_78 = 0;
            }
            uVar4 = uVar4 + 1;
            puVar14 = puVar12;
          } while (uVar4 < *(byte *)(lVar5 + 0x132));
        }
      }
      *(undefined1 *)puVar12 = 0x5d;
      if ((*(byte *)((long)param_1 + 0xb) >> 5 & 1) != 0) {
        *(undefined1 *)((long)puVar12 + 1) = 0x26;
      }
    }
    (*param_4)(&local_78,param_5);
    local_78 = 0;
    if (param_2 != 3) goto LAB_03fb8184;
LAB_03fb7ea0:
    local_78 = 0;
    lVar5 = *(long *)(*plVar6 + 0x10);
  }
  local_78 = CONCAT71(local_78._1_7_,0x2c);
  (*param_4)(&local_78,param_5);
  FUN_03fb41b4(lVar5 + 0x18,param_4,param_5);
LAB_03fb8184:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

