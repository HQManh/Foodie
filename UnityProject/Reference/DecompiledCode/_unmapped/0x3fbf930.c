// rea decompile_all
// name: FUN_03fbf930
// address: 0x3fbf930
// body: available
// range: 0x3fbf930-0x3fbfd3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fbf930(long *param_1,undefined8 param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  void *local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  void *local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  void *local_70;
  void *pvStack_68;
  undefined8 local_60;
  ulong local_58;
  undefined4 local_50;
  undefined1 local_48;
  
  puVar1 = (ushort *)((long)param_1 + 0x135);
  if ((*puVar1 >> 8 & 1) == 0) {
    lVar7 = param_1[0xb];
    *puVar1 = *puVar1 | 0x80;
    if ((lVar7 != 0) && ((*(ushort *)(lVar7 + 0x135) >> 8 & 1) == 0)) {
      FUN_03fbf930(lVar7,param_2);
    }
    if (param_1[0xc] == 0) {
      if (*(short *)((long)param_1 + 0x124) == 0) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        puVar9 = (undefined8 *)FUN_03fa7f34(*(short *)((long)param_1 + 0x124),0x20);
        uVar4 = *(ushort *)((long)param_1 + 0x124);
        if (uVar4 != 0) {
          uVar13 = 0;
          puVar14 = puVar9;
          do {
            FUN_03fac1a0(&local_70,param_1,uVar13);
            auVar16._8_8_ = pvStack_68;
            auVar16._0_8_ = local_70;
            puVar14[2] = param_1;
            auVar16 = NEON_ext(auVar16,auVar16,8,1);
            puVar14[1] = auVar16._8_8_;
            *puVar14 = auVar16._0_8_;
            uVar6 = FUN_03fc38f0(param_1,uVar13,puVar14);
            *(undefined4 *)(puVar14 + 3) = uVar6;
            uVar13 = uVar13 + 1;
            *(undefined4 *)((long)puVar14 + 0x1c) = (undefined4)local_60;
            puVar14 = puVar14 + 4;
          } while (uVar4 != uVar13);
        }
      }
      param_1[0x10] = (long)puVar9;
    }
    else {
      uVar8 = FUN_03fb4784();
      FUN_03fbf930(uVar8,param_2);
      FUN_03fb4950(param_1);
    }
    if ((*puVar1 >> 4 & 1) == 0) {
      lVar7 = param_1[0xb];
      if (lVar7 == 0) {
        uVar6 = 0x10;
        uVar12 = 8;
        uVar13 = 0x10;
      }
      else {
        *puVar1 = *(ushort *)(lVar7 + 0x135) & 0x20 | *puVar1;
        uVar13 = *(uint *)(lVar7 + 0xf8);
        uVar6 = *(undefined4 *)(lVar7 + 0x100);
        if ((int)param_1[5] < 0) {
          uVar12 = 1;
        }
        else {
          uVar12 = *(undefined1 *)(lVar7 + 0x133);
        }
      }
      *(undefined1 *)((long)param_1 + 0x133) = uVar12;
      if (*(short *)((long)param_1 + 0x124) == 0) {
        if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
          lVar7 = FUN_03faba18(*(undefined8 *)param_1[0xc]);
          uVar3 = *(uint *)(lVar7 + 0xf8);
          uVar2 = uVar3;
          if (uVar3 <= uVar13) {
            uVar2 = uVar13;
          }
          if (uVar3 != 0) {
            uVar13 = uVar2;
          }
          *(uint *)(param_1 + 0x1f) = uVar13;
        }
        *(undefined4 *)(param_1 + 0x20) = uVar6;
      }
      else {
        lVar7 = 0;
        uVar15 = 0;
        do {
          lVar11 = param_1[0x10];
          uVar10 = FUN_03fbb4d0(lVar11 + lVar7);
          if ((uVar10 & 1) != 0) {
            uVar8 = FUN_03fb81f4(*(undefined8 *)(lVar11 + lVar7 + 8));
            uVar10 = FUN_03fb845c();
            if ((uVar10 & 1) == 0) {
              uVar10 = FUN_03fb84ac(uVar8);
              if ((uVar10 & 1) != 0) {
                FUN_03fbe574(uVar8,1);
                uVar10 = FUN_03fc1748();
                if ((uVar10 & 1) != 0) goto LAB_03fbfaac;
              }
            }
            else {
LAB_03fbfaac:
              *puVar1 = *puVar1 | 0x20;
            }
          }
          uVar15 = uVar15 + 1;
          lVar7 = lVar7 + 0x20;
        } while (uVar15 < *(ushort *)((long)param_1 + 0x124));
        uVar12 = *(undefined1 *)((long)param_1 + 0x134);
        local_70 = (void *)0x0;
        pvStack_68 = (void *)0x0;
        local_60 = 0;
        local_a0 = (void *)0x0;
        local_98 = (void *)0x0;
        if ((*puVar1 & 0x20) != 0) {
          uVar12 = 0;
        }
        local_90 = 0;
        local_d0 = (void *)0x0;
        local_c8 = (void *)0x0;
        local_c0 = 0;
        FUN_03f76bf8(param_1,uVar13,uVar6,*(undefined1 *)((long)param_1 + 0x133),uVar12,&local_70);
        uVar15 = local_58;
        if (((int)param_1[5] < 0) && (pvStack_68 == local_70)) {
          uVar15 = 0x11;
          *(undefined4 *)(param_1 + 0x20) = 0x11;
        }
        if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
          lVar7 = FUN_03faba18(*(undefined8 *)param_1[0xc]);
          uVar13 = *(uint *)(lVar7 + 0xf8);
          uVar10 = (ulong)uVar13;
          if (uVar13 <= uVar15) {
            uVar10 = uVar15;
          }
          if (uVar13 != 0) {
            uVar15 = uVar10;
          }
          *(int *)(param_1 + 0x1f) = (int)uVar15;
        }
        *puVar1 = *puVar1 | 0x100;
        FUN_03f76e1c(param_1,&local_a0);
        FUN_03f76e40(param_1,&local_d0);
        *(undefined1 *)((long)param_1 + 0x133) = local_48;
        if ((param_1[0xc] == 0) && (uVar10 = FUN_03fabbc8(param_1[0xd]), (uVar10 & 1) == 0)) {
          local_50 = (undefined4)param_1[0x1f];
        }
        *(undefined4 *)(param_1 + 0x20) = local_50;
        if ((*param_1 == DAT_095353d8) &&
           (iVar5 = strcmp("Ephemeron",(char *)param_1[2]), iVar5 == 0)) {
          *puVar1 = *puVar1 & 0xffdf;
        }
        if (param_1[0xc] != 0) {
          FUN_03fc3b50(0,param_1,uVar15,&local_70);
          FUN_03fc3b50(1,param_1,local_88,&local_a0);
          FUN_03fc3b50(2,param_1,local_b8,&local_d0);
        }
        if (local_d0 != (void *)0x0) {
          local_c8 = local_d0;
          operator_delete(local_d0);
        }
        if (local_a0 != (void *)0x0) {
          local_98 = local_a0;
          operator_delete(local_a0);
        }
        if (local_70 != (void *)0x0) {
          pvStack_68 = local_70;
          operator_delete(local_70);
        }
      }
      if (*(int *)((long)param_1 + 0x10c) != 0) {
        lVar7 = FUN_03f5da88(*(int *)((long)param_1 + 0x10c),0);
        param_1[0x17] = lVar7;
        thunk_FUN_03fd69a8(FUN_03fc3ca8,param_1);
        FUN_0404c020(*(undefined4 *)((long)param_1 + 0x10c),&DAT_09534440);
      }
      if ((int)param_1[0x22] != 0) {
        uVar6 = FUN_03facf4c();
        *(undefined4 *)((long)param_1 + 0x114) = uVar6;
      }
      if ((int)param_1[5] < 0) {
        iVar5 = (int)param_1[0x1f] + -0x10;
      }
      else {
        iVar5 = 8;
      }
      *(int *)((long)param_1 + 0xfc) = iVar5;
    }
    DataMemoryBarrier(2,3);
    *puVar1 = *puVar1 & 0xfe7f | 0x100;
  }
  return;
}

