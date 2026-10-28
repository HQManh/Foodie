// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl.<SetUpBeforeLoadLevelScene>d__52$$MoveNext
// address: 0x439be9c
// body: available
// range: 0x439be9c-0x439d003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x439d000 to 0x89db488 FUN_089db488 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelPlayLoadAndSetupControl_<SetUpBeforeLoadLevelScene>d__52__MoveNext
               (int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  int *piVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined4 local_e0;
  undefined4 local_d4;
  undefined1 local_d0 [16];
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined1 local_80 [16];
  undefined8 local_70;
  
  if ((DAT_09517a89 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf6e8);
    FUN_03f5c2a4(&DAT_091bf700);
    FUN_03f5c2a4(&DAT_091bf708);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_091978c0);
    FUN_03f5c2a4(&DAT_091978d8);
    FUN_03f5c2a4(&DAT_091978e0);
    FUN_03f5c2a4(&DAT_091978c8);
    FUN_03f5c2a4(&DAT_091978d0);
    FUN_03f5c2a4(&DAT_091978e8);
    FUN_03f5c2a4(&DAT_091c2058);
    FUN_03f5c2a4(&DAT_09182258);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_0919edc8);
    FUN_03f5c2a4(&DAT_091cd9a0);
    FUN_03f5c2a4(&DAT_091cd9b0);
    FUN_03f5c2a4(&DAT_091cd9b8);
    FUN_03f5c2a4(&DAT_091d23d0);
    FUN_03f5c2a4(&DAT_091ab170);
    FUN_03f5c2a4(&DAT_091aa4e8);
    FUN_03f5c2a4(&DAT_091b17f8);
    FUN_03f5c2a4(&DAT_091b17f0);
    FUN_03f5c2a4(&DAT_0917d000);
    FUN_03f5c2a4(&DAT_09187a78);
    FUN_03f5c2a4(&DAT_091d28f0);
    FUN_03f5c2a4(&DAT_091d28f8);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_091b4a60);
    FUN_03f5c2a4(&DAT_091b4978);
    FUN_03f5c2a4(&DAT_091b48d8);
    FUN_03f5c2a4(&DAT_091b4ab0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189e78);
    FUN_03f5c2a4(&DAT_0918a1f0);
    FUN_03f5c2a4(&DAT_09194430);
    FUN_03f5c2a4(&DAT_09194ba8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091bde98);
    FUN_03f5c2a4(&DAT_091bde90);
    FUN_03f5c2a4(&DAT_091bde38);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_092240f0);
    FUN_03f5c2a4(&DAT_09225078);
    FUN_03f5c2a4(&DAT_0921a020);
    FUN_03f5c2a4(&DAT_0921e6c8);
    FUN_03f5c2a4(&DAT_0921eab8);
    FUN_03f5c2a4(&DAT_09211660);
    FUN_03f5c2a4(&DAT_09219ac0);
    FUN_03f5c2a4(&DAT_0921d2c8);
    DAT_09517a89 = 1;
  }
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  iVar5 = *param_1;
  local_d0._8_8_ = 0;
  lVar13 = *(long *)(param_1 + 6);
  local_d0._0_8_ = 0;
  local_d4 = 0;
  local_e0 = 0;
  if (iVar5 < 4) {
    if (iVar5 < 2) {
      if (iVar5 == 0) {
        local_d0 = *(undefined1 (*) [16])(param_1 + 0x2a);
        iVar5 = -1;
        param_1[0x2a] = 0;
        param_1[0x2b] = 0;
        param_1[0x2c] = 0;
        param_1[0x2d] = 0;
        *param_1 = -1;
LAB_0439d064:
        if (DAT_095162d6 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d6 = '\x01';
        }
        uVar15 = local_d0._0_8_;
        if ((long *)local_d0._0_8_ != (long *)0x0) {
          lVar10 = *(long *)local_d0._0_8_;
          uVar18 = local_d0._8_8_ & 0xffff;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_091868c0) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_0439d0e8;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(local_d0._0_8_,DAT_091868c0,2);
LAB_0439d0e8:
          (*(code *)*puVar7)(uVar15,uVar18,puVar7[1]);
        }
        local_80._8_8_ = *(undefined8 *)(param_1 + 0xe);
        local_80._0_8_ = *(undefined8 *)(param_1 + 0xc);
        local_70 = *(undefined8 *)(param_1 + 0x10);
        uVar11 = FUN_04be2f0c(local_80,DAT_091d23d0);
        if ((uVar11 & 1) == 0) {
          uVar14 = *(undefined8 *)(param_1 + 10);
          uVar15 = thunk_FUN_03fc39d4(&DAT_09206cd8);
          uVar20 = thunk_FUN_03fc39d4(&DAT_091f74f0);
          uVar15 = System_String__Concat(uVar15,uVar14,uVar20,0);
          thunk_FUN_03fc39d4(&DAT_091870e0);
          uVar20 = thunk_FUN_03f9944c();
          System_InvalidOperationException___ctor(uVar20,uVar15,0);
          uVar15 = thunk_FUN_03fc39d4(&DAT_091ecb10);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar20,uVar15);
        }
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + 0x50);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar11 = UnityEngine_Object__op_Implicit(uVar15,0);
        if ((uVar11 & 1) == 0) {
          lVar10 = *(long *)(lVar13 + 0x30);
          iVar4 = FUN_0640f818(param_1 + 0x18,DAT_091978e0);
          if (iVar4 == 1) {
            uVar15 = FUN_0640f7ac(param_1 + 0x18,DAT_091978d8);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar11 = UnityEngine_Object__op_Implicit(uVar15,0);
            if ((uVar11 & 1) == 0) goto LAB_0439d1bc;
            uVar15 = FUN_0640f7ac(param_1 + 0x18,DAT_091978d8);
          }
          else {
LAB_0439d1bc:
            uVar15 = 0;
          }
          if (lVar10 == 0) goto LAB_0439e950;
          puVar7 = (undefined8 *)(lVar10 + 0x50);
          *puVar7 = uVar15;
          thunk_FUN_03f5d7b8(puVar7);
        }
        if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + 0x58);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar11 = UnityEngine_Object__op_Implicit(uVar15,0);
        if ((uVar11 & 1) == 0) {
          iVar4 = FUN_0640f818(param_1 + 0x1e,DAT_091978c8);
          if (iVar4 != 1) goto LAB_0439d2c0;
          uVar15 = FUN_0640f7ac(param_1 + 0x1e,DAT_091978c0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = UnityEngine_Object__op_Implicit(uVar15,0);
          if ((uVar11 & 1) == 0) goto LAB_0439d2c0;
          lVar10 = *(long *)(lVar13 + 0x30);
          uVar15 = FUN_0640f7ac(param_1 + 0x1e,DAT_091978c0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          puVar7 = (undefined8 *)(lVar10 + 0x58);
          *puVar7 = uVar15;
          thunk_FUN_03f5d7b8(puVar7);
          if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar10 = *(long *)(*(long *)(lVar13 + 0x30) + 0x58);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar10 = CakeOrder_DataSO_MapAssetPackSO__GetRandomGameplayMusic(lVar10,0);
          if (lVar10 == 0) {
            lVar10 = FUN_039af8ec(DAT_091b48d0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            CakeOrder_AudioManagerCakeOrder__StopMusic(lVar10,0);
          }
          else {
            lVar8 = FUN_039af8ec(DAT_091b48d0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            CakeOrder_AudioManagerCakeOrder__PlayMusic(0x3f800000,lVar8,lVar10,1,0);
          }
        }
        else {
LAB_0439d2c0:
          lVar10 = *(long *)(DAT_091b48d0 + 0x20);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_03f95a6c();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_03f95a6c();
          }
          if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          CakeOrder_AudioManagerCakeOrder__StopMusic(**(long **)(lVar10 + 0xb8),0);
        }
        uVar11 = FUN_05a8eda4(DAT_091b4978);
        if ((uVar11 & 1) != 0) {
          lVar10 = *(long *)(DAT_091b4970 + 0x20);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_03f95a6c();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_03f95a6c();
          }
          if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar11 = CakeOrder_HeartSystem_HeartSystemController__IsInUnlimitedHeart
                             (**(long **)(lVar10 + 0xb8),0);
          if ((uVar11 & 1) == 0) {
            lVar8 = *(long *)(lVar13 + 0x30);
            lVar10 = *(long *)(DAT_091b4970 + 0x20);
            if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_03f95a6c();
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_03f95a6c();
            }
            if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar15 = CakeOrder_HeartSystem_HeartSystemController__UseOneHeart
                               (**(long **)(lVar10 + 0xb8),1,1,0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            puVar7 = (undefined8 *)(lVar8 + 0xe0);
            *puVar7 = uVar15;
            thunk_FUN_03f5d7b8(puVar7);
          }
        }
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_80 = Cysharp_Threading_Tasks_UniTask__NextFrame(0);
        thunk_FUN_03f5d7b8(local_80,0);
        local_d0 = local_80;
        if (DAT_095162d4 == '\0') {
          FUN_03f5c2a4(&DAT_0918c610);
          DAT_095162d4 = '\x01';
        }
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_095162d5 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d5 = '\x01';
        }
        uVar15 = local_d0._0_8_;
        if ((long *)local_d0._0_8_ != (long *)0x0) {
          lVar10 = *(long *)local_d0._0_8_;
          uVar18 = local_d0._8_8_ & 0xffff;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_091868c0) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0439d4b4;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(local_d0._0_8_,DAT_091868c0,0);
LAB_0439d4b4:
          iVar4 = (*(code *)*puVar7)(uVar15,uVar18,puVar7[1]);
          if (iVar4 == 0) {
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 0x2a) = local_d0;
            thunk_FUN_03f5d7b8(param_1 + 0x2a,0);
            FUN_0439fe60(param_1 + 2,local_d0,param_1,DAT_091c2058);
            return;
          }
        }
      }
      else {
        if (iVar5 != 1) {
LAB_0439c26c:
          uVar11 = FUN_05a8eda4(DAT_091b4a60);
          if ((uVar11 & 1) == 0) {
            uVar15 = 0;
          }
          else {
            lVar10 = *(long *)(DAT_091b4a58 + 0x20);
            if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_03f95a6c();
            }
            lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
              lVar10 = FUN_03f95a6c();
            }
            uVar15 = **(undefined8 **)(lVar10 + 0xb8);
          }
          *(undefined8 *)(param_1 + 8) = uVar15;
          thunk_FUN_03f5d7b8();
          lVar10 = thunk_FUN_03f9944c(DAT_0917d000);
          FUN_058a14ac(lVar10,DAT_091b17f0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          piVar12 = param_1 + 10;
          *(undefined8 *)piVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + 0x10);
          thunk_FUN_03f5d7b8(piVar12);
          uVar15 = *(undefined8 *)piVar12;
          if (*(int *)(DAT_09182278 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          CakeOrder_Localization_CakeLocalization__SetActiveMap(uVar15,0);
          lVar8 = FUN_03f5c394(DAT_091805f8,2);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined8 *)(lVar8 + 0x20) = DAT_09211660;
          thunk_FUN_03f5d7b8();
          uVar15 = *(undefined8 *)piVar12;
          if (*(int *)(DAT_09187a78 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar15 = CakeOrder_Localization_LocTables__Map(uVar15,0);
          if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined8 *)(lVar8 + 0x28) = uVar15;
          thunk_FUN_03f5d7b8();
          auVar21 = CakeOrder_Localization_CakeLocalization__PreloadAsync(lVar8,0);
          auVar21 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__LogIfLoadFailed
                              (auVar21._0_8_,auVar21._8_8_,DAT_0921eab8);
          lVar8 = DAT_091b17f8;
          if (lVar10 == 0) {
LAB_0439e9b4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar16 = *(long *)(lVar10 + 0x10);
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_0439e9b4;
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            pauVar6 = (undefined1 (*) [16])(lVar16 + (long)(int)uVar2 * 0x10 + 0x20);
            *pauVar6 = auVar21;
            thunk_FUN_03f5d7b8(pauVar6,0);
          }
          else {
            FUN_058a1d58(lVar10,auVar21._0_8_,auVar21._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          piVar19 = param_1 + 0xc;
          piVar19[0] = 0;
          piVar19[1] = 0;
          uVar20 = *(undefined8 *)(param_1 + 10);
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          param_1[0x10] = 0;
          param_1[0x11] = 0;
          uVar15 = UnityEngine_Component__get_transform(lVar13,0);
          CakeOrder_MapDataAssetCategory__InstantiateAssetPrefab(local_80,uVar20,0,uVar15,0);
          local_110._8_8_ = local_80._8_8_;
          local_110._0_8_ = local_80._0_8_;
          local_100 = local_70;
          *(undefined8 *)(param_1 + 0xe) = local_80._8_8_;
          *(undefined8 *)piVar19 = local_80._0_8_;
          *(undefined8 *)(param_1 + 0x10) = local_70;
          thunk_FUN_03f5d7b8(piVar19,0);
          lVar8 = DAT_091aa4e8;
          lVar16 = *(long *)(lVar13 + 0x60);
          if (lVar16 == 0) {
LAB_0439e9b8:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          local_90 = *(undefined8 *)(param_1 + 0x10);
          local_a0._8_8_ = *(undefined8 *)(param_1 + 0xe);
          local_a0._0_8_ = *(undefined8 *)piVar19;
          lVar9 = *(long *)(lVar16 + 0x10);
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_0439e9b8;
          uVar2 = *(uint *)(lVar16 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar2 * 0x18;
            *(uint *)(lVar16 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar9 + 0x28) = local_a0._8_8_;
            *(undefined8 *)(lVar9 + 0x20) = local_a0._0_8_;
            *(undefined8 *)(lVar9 + 0x30) = local_90;
            thunk_FUN_03f5d7b8(lVar9 + 0x20,0);
          }
          else {
            local_80._0_8_ = local_a0._0_8_;
            local_80._8_8_ = local_a0._8_8_;
            local_70 = local_90;
            FUN_0564eb10(lVar16,local_80,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          local_80._8_8_ = *(undefined8 *)(param_1 + 0xe);
          local_80._0_8_ = *(undefined8 *)piVar19;
          local_70 = *(undefined8 *)(param_1 + 0x10);
          FUN_04b722fc(local_a0,local_80,0,8,0,0,0,DAT_091bf6e8);
          local_80._8_8_ = local_a0._8_8_;
          local_80._0_8_ = local_a0._0_8_;
          local_70 = local_90;
          auVar21 = FUN_06473ed4(local_80,DAT_091bde38);
          auVar21 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__LogIfLoadFailed
                              (auVar21._0_8_,auVar21._8_8_,DAT_0921e6c8);
          lVar8 = DAT_091b17f8;
          lVar16 = *(long *)(lVar10 + 0x10);
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            pauVar6 = (undefined1 (*) [16])(lVar16 + (long)(int)uVar2 * 0x10 + 0x20);
            *pauVar6 = auVar21;
            thunk_FUN_03f5d7b8(pauVar6,0);
          }
          else {
            FUN_058a1d58(lVar10,auVar21._0_8_,auVar21._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          piVar19 = param_1 + 0x12;
          piVar19[0] = 0;
          piVar19[1] = 0;
          uVar20 = *(undefined8 *)(param_1 + 10);
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          uVar15 = UnityEngine_Component__get_transform(lVar13,0);
          CakeOrder_MapDataAssetCategory__InstantiateAssetPrefab(local_80,uVar20,1,uVar15,0);
          uStack_128 = local_80._8_8_;
          local_130 = (long *)local_80._0_8_;
          local_120 = local_70;
          *(undefined8 *)(param_1 + 0x14) = local_80._8_8_;
          *(undefined8 *)piVar19 = local_80._0_8_;
          *(undefined8 *)(param_1 + 0x16) = local_70;
          thunk_FUN_03f5d7b8(piVar19,0);
          lVar8 = *(long *)(lVar13 + 0x60);
          if (lVar8 == 0) {
LAB_0439e9bc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          local_90 = *(undefined8 *)(param_1 + 0x16);
          local_a0._8_8_ = *(undefined8 *)(param_1 + 0x14);
          local_a0._0_8_ = *(undefined8 *)piVar19;
          lVar16 = *(long *)(lVar8 + 0x10);
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_0439e9bc;
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            lVar16 = lVar16 + (long)(int)uVar2 * 0x18;
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar16 + 0x28) = local_a0._8_8_;
            *(undefined8 *)(lVar16 + 0x20) = local_a0._0_8_;
            *(undefined8 *)(lVar16 + 0x30) = local_90;
            thunk_FUN_03f5d7b8(lVar16 + 0x20,0);
          }
          else {
            local_80._0_8_ = local_a0._0_8_;
            local_80._8_8_ = local_a0._8_8_;
            local_70 = local_90;
            FUN_0564eb10(lVar8,local_80,
                         *(undefined8 *)(*(long *)(*(long *)(DAT_091aa4e8 + 0x20) + 0xc0) + 0x70));
          }
          local_80._8_8_ = *(undefined8 *)(param_1 + 0x14);
          local_80._0_8_ = *(undefined8 *)piVar19;
          local_70 = *(undefined8 *)(param_1 + 0x16);
          FUN_04b722fc(local_a0,local_80,0,8,0,0,0,DAT_091bf6e8);
          local_80._8_8_ = local_a0._8_8_;
          local_80._0_8_ = local_a0._0_8_;
          local_70 = local_90;
          auVar21 = FUN_06473ed4(local_80,DAT_091bde38);
          auVar21 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__LogIfLoadFailed
                              (auVar21._0_8_,auVar21._8_8_,DAT_09225078);
          lVar8 = DAT_091b17f8;
          lVar16 = *(long *)(lVar10 + 0x10);
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            pauVar6 = (undefined1 (*) [16])(lVar16 + (long)(int)uVar2 * 0x10 + 0x20);
            *pauVar6 = auVar21;
            thunk_FUN_03f5d7b8(pauVar6,0);
          }
          else {
            FUN_058a1d58(lVar10,auVar21._0_8_,auVar21._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          piVar19 = param_1 + 0x18;
          piVar19[0] = 0;
          piVar19[1] = 0;
          param_1[0x1a] = 0;
          param_1[0x1b] = 0;
          param_1[0x1c] = 0;
          param_1[0x1d] = 0;
          if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + 0x50);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = UnityEngine_Object__op_Implicit(uVar15,0);
          if ((uVar11 & 1) == 0) {
            FUN_04bfccd0(local_80,*(undefined8 *)piVar12,4,DAT_091d28f8);
            local_a0._8_8_ = local_80._8_8_;
            local_a0._0_8_ = local_80._0_8_;
            local_90 = local_70;
            *(undefined8 *)(param_1 + 0x1a) = local_80._8_8_;
            *(undefined8 *)piVar19 = local_80._0_8_;
            *(undefined8 *)(param_1 + 0x1c) = local_70;
            thunk_FUN_03f5d7b8(piVar19,0);
            local_80._8_8_ = *(undefined8 *)(param_1 + 0x1a);
            local_80._0_8_ = *(undefined8 *)piVar19;
            local_70 = *(undefined8 *)(param_1 + 0x1c);
            lVar16 = *(long *)(lVar13 + 0x58);
            FUN_0640e33c(local_110,local_80,DAT_091978e8);
            lVar8 = DAT_091ab170;
            uStack_148 = local_110._8_8_;
            local_150 = (long *)local_110._0_8_;
            local_140 = local_100;
            if (lVar16 == 0) {
LAB_0439eb10:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *(long *)(lVar16 + 0x10);
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_0439eb10;
            uVar2 = *(uint *)(lVar16 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              lVar9 = lVar9 + (long)(int)uVar2 * 0x18;
              *(uint *)(lVar16 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar9 + 0x28) = local_110._8_8_;
              *(undefined8 *)(lVar9 + 0x20) = local_110._0_8_;
              *(undefined8 *)(lVar9 + 0x30) = local_100;
              thunk_FUN_03f5d7b8(lVar9 + 0x20,0);
            }
            else {
              local_80._8_8_ = local_110._8_8_;
              local_80._0_8_ = local_110._0_8_;
              local_70 = local_100;
              FUN_05716774(lVar16,local_80,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            local_80._8_8_ = *(undefined8 *)(param_1 + 0x1a);
            local_80._0_8_ = *(undefined8 *)piVar19;
            local_70 = *(undefined8 *)(param_1 + 0x1c);
            FUN_04b722fc(local_110,local_80,0,8,0,0,0,DAT_091bf708);
            local_80._8_8_ = local_110._8_8_;
            local_80._0_8_ = local_110._0_8_;
            local_70 = local_100;
            auVar21 = FUN_06473ed4(local_80,DAT_091bde98);
            auVar21 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__LogIfLoadFailed
                                (auVar21._0_8_,auVar21._8_8_,DAT_0921a020);
            lVar8 = DAT_091b17f8;
            lVar16 = *(long *)(lVar10 + 0x10);
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar2 = *(uint *)(lVar10 + 0x18);
            if (uVar2 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar2 + 1;
              pauVar6 = (undefined1 (*) [16])(lVar16 + (long)(int)uVar2 * 0x10 + 0x20);
              *pauVar6 = auVar21;
              thunk_FUN_03f5d7b8(pauVar6,0);
            }
            else {
              FUN_058a1d58(lVar10,auVar21._0_8_,auVar21._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
          }
          piVar19 = param_1 + 0x1e;
          piVar19[0] = 0;
          piVar19[1] = 0;
          param_1[0x20] = 0;
          param_1[0x21] = 0;
          param_1[0x22] = 0;
          param_1[0x23] = 0;
          if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + 0x58);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = UnityEngine_Object__op_Implicit(uVar15,0);
          if ((uVar11 & 1) == 0) {
            FUN_04bfccd0(local_80,*(undefined8 *)piVar12,5,DAT_091d28f0);
            local_a0._8_8_ = local_80._8_8_;
            local_a0._0_8_ = local_80._0_8_;
            local_90 = local_70;
            *(undefined8 *)(param_1 + 0x20) = local_80._8_8_;
            *(undefined8 *)piVar19 = local_80._0_8_;
            *(undefined8 *)(param_1 + 0x22) = local_70;
            thunk_FUN_03f5d7b8(piVar19,0);
            local_80._8_8_ = *(undefined8 *)(param_1 + 0x20);
            local_80._0_8_ = *(undefined8 *)piVar19;
            local_70 = *(undefined8 *)(param_1 + 0x22);
            lVar16 = *(long *)(lVar13 + 0x58);
            FUN_0640e33c(local_110,local_80,DAT_091978d0);
            lVar8 = DAT_091ab170;
            uStack_168 = local_110._8_8_;
            local_170 = (long *)local_110._0_8_;
            local_160 = local_100;
            if (lVar16 == 0) {
LAB_0439eb18:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *(long *)(lVar16 + 0x10);
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_0439eb18;
            uVar2 = *(uint *)(lVar16 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              lVar9 = lVar9 + (long)(int)uVar2 * 0x18;
              *(uint *)(lVar16 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar9 + 0x28) = local_110._8_8_;
              *(undefined8 *)(lVar9 + 0x20) = local_110._0_8_;
              *(undefined8 *)(lVar9 + 0x30) = local_100;
              thunk_FUN_03f5d7b8(lVar9 + 0x20,0);
            }
            else {
              local_80._8_8_ = local_110._8_8_;
              local_80._0_8_ = local_110._0_8_;
              local_70 = local_100;
              FUN_05716774(lVar16,local_80,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            local_80._8_8_ = *(undefined8 *)(param_1 + 0x20);
            local_80._0_8_ = *(undefined8 *)piVar19;
            local_70 = *(undefined8 *)(param_1 + 0x22);
            FUN_04b722fc(local_110,local_80,0,8,0,0,0,DAT_091bf700);
            local_80._8_8_ = local_110._8_8_;
            local_80._0_8_ = local_110._0_8_;
            local_70 = local_100;
            auVar21 = FUN_06473ed4(local_80,DAT_091bde90);
            auVar21 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__LogIfLoadFailed
                                (auVar21._0_8_,auVar21._8_8_,DAT_0921d2c8);
            lVar8 = DAT_091b17f8;
            lVar16 = *(long *)(lVar10 + 0x10);
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar2 = *(uint *)(lVar10 + 0x18);
            if (uVar2 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar2 + 1;
              pauVar6 = (undefined1 (*) [16])(lVar16 + (long)(int)uVar2 * 0x10 + 0x20);
              *pauVar6 = auVar21;
              thunk_FUN_03f5d7b8(pauVar6,0);
            }
            else {
              FUN_058a1d58(lVar10,auVar21._0_8_,auVar21._8_8_,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar20 = *(undefined8 *)piVar12;
          local_c0 = (long *)0x0;
          uStack_b8 = 0;
          local_b0 = 0;
          uVar15 = UnityEngine_Component__get_transform(lVar13,0);
          CakeOrder_MapDataAssetCategory__InstantiateAssetPrefab(local_80,uVar20,3,uVar15,0);
          lVar8 = DAT_091aa4e8;
          lVar16 = *(long *)(lVar13 + 0x60);
          uStack_b8 = local_80._8_8_;
          local_c0 = (long *)local_80._0_8_;
          local_b0 = local_70;
          if (lVar16 == 0) {
LAB_0439e9c0:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *(long *)(lVar16 + 0x10);
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_0439e9c0;
          uVar2 = *(uint *)(lVar16 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar2 * 0x18;
            *(uint *)(lVar16 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar9 + 0x28) = local_80._8_8_;
            *(undefined8 *)(lVar9 + 0x20) = local_80._0_8_;
            *(undefined8 *)(lVar9 + 0x30) = local_70;
            thunk_FUN_03f5d7b8(lVar9 + 0x20,0);
          }
          else {
            FUN_0564eb10(lVar16,local_80,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          local_80._8_8_ = uStack_b8;
          local_80._0_8_ = local_c0;
          local_70 = local_b0;
          FUN_04b722fc(local_a0,local_80,0,8,0,0,0,DAT_091bf6e8);
          local_80._8_8_ = local_a0._8_8_;
          local_80._0_8_ = local_a0._0_8_;
          local_70 = local_90;
          auVar21 = FUN_06473ed4(local_80,DAT_091bde38);
          auVar21 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__LogIfLoadFailed
                              (auVar21._0_8_,auVar21._8_8_,DAT_09219ac0);
          lVar8 = DAT_091b17f8;
          lVar16 = *(long *)(lVar10 + 0x10);
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            pauVar6 = (undefined1 (*) [16])(lVar16 + (long)(int)uVar2 * 0x10 + 0x20);
            *pauVar6 = auVar21;
            thunk_FUN_03f5d7b8(pauVar6,0);
          }
          else {
            FUN_058a1d58(lVar10,auVar21._0_8_,auVar21._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          piVar12 = param_1 + 0x24;
          piVar12[0] = 0;
          piVar12[1] = 0;
          uVar20 = *(undefined8 *)(param_1 + 10);
          param_1[0x26] = 0;
          param_1[0x27] = 0;
          param_1[0x28] = 0;
          param_1[0x29] = 0;
          uVar15 = UnityEngine_Component__get_transform(lVar13,0);
          CakeOrder_MapDataAssetCategory__InstantiateAssetPrefab(local_80,uVar20,2,uVar15,0);
          local_110._8_8_ = local_80._8_8_;
          local_110._0_8_ = local_80._0_8_;
          local_100 = local_70;
          *(undefined8 *)(param_1 + 0x26) = local_80._8_8_;
          *(undefined8 *)piVar12 = local_80._0_8_;
          *(undefined8 *)(param_1 + 0x28) = local_70;
          thunk_FUN_03f5d7b8(piVar12,0);
          lVar8 = *(long *)(lVar13 + 0x60);
          if (lVar8 == 0) {
LAB_0439e9c4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          local_90 = *(undefined8 *)(param_1 + 0x28);
          local_a0._8_8_ = *(undefined8 *)(param_1 + 0x26);
          local_a0._0_8_ = *(undefined8 *)piVar12;
          lVar16 = *(long *)(lVar8 + 0x10);
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar16 == 0) goto LAB_0439e9c4;
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            lVar16 = lVar16 + (long)(int)uVar2 * 0x18;
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar16 + 0x28) = local_a0._8_8_;
            *(undefined8 *)(lVar16 + 0x20) = local_a0._0_8_;
            *(undefined8 *)(lVar16 + 0x30) = local_90;
            thunk_FUN_03f5d7b8(lVar16 + 0x20,0);
          }
          else {
            local_80._0_8_ = local_a0._0_8_;
            local_80._8_8_ = local_a0._8_8_;
            local_70 = local_90;
            FUN_0564eb10(lVar8,local_80,
                         *(undefined8 *)(*(long *)(*(long *)(DAT_091aa4e8 + 0x20) + 0xc0) + 0x70));
          }
          local_80._8_8_ = *(undefined8 *)(param_1 + 0x26);
          local_80._0_8_ = *(undefined8 *)piVar12;
          local_70 = *(undefined8 *)(param_1 + 0x28);
          FUN_04b722fc(local_a0,local_80,0,8,0,0,0,DAT_091bf6e8);
          local_80._8_8_ = local_a0._8_8_;
          local_80._0_8_ = local_a0._0_8_;
          local_70 = local_90;
          auVar21 = FUN_06473ed4(local_80,DAT_091bde38);
          auVar21 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__LogIfLoadFailed
                              (auVar21._0_8_,auVar21._8_8_,DAT_092240f0);
          lVar8 = DAT_091b17f8;
          lVar16 = *(long *)(lVar10 + 0x10);
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            pauVar6 = (undefined1 (*) [16])(lVar16 + (long)(int)uVar2 * 0x10 + 0x20);
            *pauVar6 = auVar21;
            thunk_FUN_03f5d7b8(pauVar6,0);
          }
          else {
            FUN_058a1d58(lVar10,auVar21._0_8_,auVar21._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_80 = Cysharp_Threading_Tasks_UniTask__WhenAll(lVar10,0);
          thunk_FUN_03f5d7b8(local_80,0);
          local_d0 = local_80;
          if (DAT_095162d4 == '\0') {
            FUN_03f5c2a4(&DAT_0918c610);
            DAT_095162d4 = '\x01';
          }
          if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (DAT_095162d5 == '\0') {
            FUN_03f5c2a4(&DAT_091868c0);
            DAT_095162d5 = '\x01';
          }
          if ((undefined8 *)local_d0._0_8_ != (undefined8 *)0x0) {
            FUN_089db488(*(undefined8 *)local_d0._0_8_);
            return;
          }
          goto LAB_0439d064;
        }
        local_d0 = *(undefined1 (*) [16])(param_1 + 0x2a);
        iVar5 = -1;
        param_1[0x2a] = 0;
        param_1[0x2b] = 0;
        param_1[0x2c] = 0;
        param_1[0x2d] = 0;
        *param_1 = -1;
      }
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar15 = local_d0._0_8_;
      if ((long *)local_d0._0_8_ != (long *)0x0) {
        lVar10 = *(long *)local_d0._0_8_;
        uVar18 = local_d0._8_8_ & 0xffff;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_091868c0) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_0439d54c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(local_d0._0_8_,DAT_091868c0,2);
LAB_0439d54c:
        (*(code *)*puVar7)(uVar15,uVar18,puVar7[1]);
      }
      local_80._8_8_ = *(undefined8 *)(param_1 + 0x14);
      local_80._0_8_ = *(undefined8 *)(param_1 + 0x12);
      local_70 = *(undefined8 *)(param_1 + 0x16);
      uVar11 = FUN_04be2f0c(local_80,DAT_091d23d0);
      if ((uVar11 & 1) != 0) {
        if (iVar5 == 2) goto LAB_0439d58c;
        lVar10 = FUN_0640f7ac(param_1 + 0x12,DAT_09197800);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar15 = FUN_04b7c324(lVar10,DAT_091cd9b8);
        *(undefined8 *)(param_1 + 0x2e) = uVar15;
        thunk_FUN_03f5d7b8();
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + 0x10);
        if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar15 = CakeOrder_RemoteConfigDefaultSetterCakeOrder__GetRemoteKeyForMapConfig(uVar15,4,0);
        uVar11 = FUN_05a8eda4(DAT_091b4ab0);
        if ((uVar11 & 1) == 0) {
          uVar15 = 0;
        }
        else {
          lVar10 = *(long *)(DAT_091b4aa8 + 0x20);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_03f95a6c();
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_03f95a6c();
          }
          if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar15 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar10 + 0xb8),uVar15,0);
        }
        lVar8 = *(long *)(param_1 + 0x2e);
        uVar20 = *(undefined8 *)(param_1 + 10);
        lVar10 = FUN_03f5c394(DAT_091805f8,1);
        if (lVar10 == 0) {
LAB_0439eae4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(undefined8 *)(lVar10 + 0x20) = uVar15;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x20),uVar15);
        if (lVar8 == 0) goto LAB_0439eae4;
        auVar21 = CakeOrder_DataSO_MapUpgradeConfig__SetUpWithoutTopology(lVar8,uVar20,lVar10,0);
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_110 = auVar21;
        thunk_FUN_03f5d7b8(local_110,0);
        local_d0 = local_110;
        if (DAT_095162d4 == '\0') {
          FUN_03f5c2a4(&DAT_0918c610);
          DAT_095162d4 = '\x01';
        }
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_095162d5 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d5 = '\x01';
        }
        uVar15 = local_d0._0_8_;
        if ((long *)local_d0._0_8_ != (long *)0x0) {
          lVar10 = *(long *)local_d0._0_8_;
          uVar18 = local_d0._8_8_ & 0xffff;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_091868c0) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0439e8ec;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(local_d0._0_8_,DAT_091868c0,0);
LAB_0439e8ec:
          iVar4 = (*(code *)*puVar7)(uVar15,uVar18,puVar7[1]);
          if (iVar4 == 0) {
            *param_1 = 2;
            *(undefined1 (*) [16])(param_1 + 0x2a) = local_d0;
            thunk_FUN_03f5d7b8(param_1 + 0x2a,0);
            FUN_0439fe60(param_1 + 2,local_d0,param_1,DAT_091c2058);
            return;
          }
        }
LAB_0439d5a0:
        if (DAT_095162d6 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d6 = '\x01';
        }
        uVar15 = local_d0._0_8_;
        if ((long *)local_d0._0_8_ != (long *)0x0) {
          lVar10 = *(long *)local_d0._0_8_;
          uVar18 = local_d0._8_8_ & 0xffff;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_091868c0) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_0439d740;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(local_d0._0_8_,DAT_091868c0,2);
LAB_0439d740:
          (*(code *)*puVar7)(uVar15,uVar18,puVar7[1]);
        }
        uVar15 = *(undefined8 *)(param_1 + 8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar11 = UnityEngine_Object__op_Implicit(uVar15,0);
        if ((uVar11 & 1) != 0) {
          if (*(long *)(param_1 + 0x2e) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar10 = CakeOrder_DataSO_MapUpgradeConfig__GetCurrentRestaurantStats
                             (*(long *)(param_1 + 0x2e),0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar16 = *(long *)(lVar13 + 0x30);
          lVar8 = thunk_FUN_03f9944c(DAT_0918a1f0);
          CakeOrder_RestaurantParams___ctor(lVar8,0);
          if (lVar10 == 0) {
            uVar1 = 0;
          }
          else {
            uVar11 = FUN_06f2ec88(lVar10,1,&local_d4,DAT_0919edc8);
            uVar1 = local_d4;
            if ((uVar11 & 1) == 0) {
              uVar1 = 0;
            }
          }
          if ((lVar8 == 0) || (*(undefined4 *)(lVar8 + 0x10) = uVar1, lVar16 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar17 = (long *)(lVar16 + 0xc0);
          *plVar17 = lVar8;
          thunk_FUN_03f5d7b8(plVar17,lVar8);
        }
        piVar12 = param_1 + 0x2e;
        piVar12[0] = 0;
        piVar12[1] = 0;
        thunk_FUN_03f5d7b8(piVar12,0);
        local_80._8_8_ = *(undefined8 *)(param_1 + 0x14);
        local_80._0_8_ = *(undefined8 *)(param_1 + 0x12);
        local_70 = *(undefined8 *)(param_1 + 0x16);
        if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_188 = local_80._8_8_;
        plStack_190 = (long *)local_80._0_8_;
        uStack_180 = local_70;
        UnityEngine_AddressableAssets_Addressables__ReleaseInstance(&plStack_190,0);
      }
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar17 = (long *)(*(long *)(lVar13 + 0x30) + 0xc0);
      if (*plVar17 == 0) {
        lVar10 = thunk_FUN_03f9944c(DAT_0918a1f0);
        CakeOrder_RestaurantParams___ctor(lVar10,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined4 *)(lVar10 + 0x10) = 0;
        *plVar17 = lVar10;
        thunk_FUN_03f5d7b8(plVar17,lVar10);
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_80 = Cysharp_Threading_Tasks_UniTask__NextFrame(0);
      thunk_FUN_03f5d7b8(local_80,0);
      local_d0 = local_80;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      uVar15 = local_d0._0_8_;
      if ((long *)local_d0._0_8_ != (long *)0x0) {
        lVar10 = *(long *)local_d0._0_8_;
        uVar18 = local_d0._8_8_ & 0xffff;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_091868c0) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0439d97c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(local_d0._0_8_,DAT_091868c0,0);
LAB_0439d97c:
        iVar4 = (*(code *)*puVar7)(uVar15,uVar18,puVar7[1]);
        if (iVar4 == 0) {
          *param_1 = 3;
          *(undefined1 (*) [16])(param_1 + 0x2a) = local_d0;
          thunk_FUN_03f5d7b8(param_1 + 0x2a,0);
          FUN_0439fe60(param_1 + 2,local_d0,param_1,DAT_091c2058);
          return;
        }
      }
    }
    else {
      if (iVar5 == 2) {
LAB_0439d58c:
        local_d0 = *(undefined1 (*) [16])(param_1 + 0x2a);
        iVar5 = -1;
        param_1[0x2a] = 0;
        param_1[0x2b] = 0;
        param_1[0x2c] = 0;
        param_1[0x2d] = 0;
        *param_1 = -1;
        goto LAB_0439d5a0;
      }
      if (iVar5 != 3) goto LAB_0439c26c;
      local_d0 = *(undefined1 (*) [16])(param_1 + 0x2a);
      iVar5 = -1;
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      *param_1 = -1;
    }
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar15 = local_d0._0_8_;
    if ((long *)local_d0._0_8_ != (long *)0x0) {
      lVar10 = *(long *)local_d0._0_8_;
      uVar18 = local_d0._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_091868c0) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_0439da50;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(local_d0._0_8_,DAT_091868c0,2);
LAB_0439da50:
      (*(code *)*puVar7)(uVar15,uVar18,puVar7[1]);
    }
    lVar10 = FUN_0640f7ac(param_1 + 0xc,DAT_09197800);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = FUN_04b7c324(lVar10,DAT_091cd9a0);
    plVar17 = (long *)(param_1 + 0x30);
    *plVar17 = lVar10;
    thunk_FUN_03f5d7b8(plVar17);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + 0x10);
    if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar15 = CakeOrder_RemoteConfigDefaultSetterCakeOrder__GetRemoteKeyForMapConfig(uVar15,5,0);
    uVar11 = FUN_05a8eda4(DAT_091b4ab0);
    if ((uVar11 & 1) == 0) {
      uVar15 = 0;
    }
    else {
      lVar10 = *(long *)(DAT_091b4aa8 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar15 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar10 + 0xb8),uVar15,0);
    }
    if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *plVar17;
    uVar20 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + 0x10);
    lVar10 = FUN_03f5c394(DAT_091805f8,1);
    if (lVar10 == 0) {
LAB_0439e954:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar10 + 0x20) = uVar15;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x20),uVar15);
    if (lVar8 == 0) goto LAB_0439e954;
    auVar21 = CakeOrder_MapLevelMetadataConfig__SetUpAfterSpawn(lVar8,uVar20,lVar10,0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_80 = auVar21;
    thunk_FUN_03f5d7b8(local_80,0);
    local_d0 = local_80;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar15 = local_d0._0_8_;
    if ((long *)local_d0._0_8_ != (long *)0x0) {
      lVar10 = *(long *)local_d0._0_8_;
      uVar18 = local_d0._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_091868c0) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0439dc84;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(local_d0._0_8_,DAT_091868c0,0);
LAB_0439dc84:
      iVar4 = (*(code *)*puVar7)(uVar15,uVar18,puVar7[1]);
      if (iVar4 == 0) {
        *param_1 = 4;
        *(undefined1 (*) [16])(param_1 + 0x2a) = local_d0;
        thunk_FUN_03f5d7b8(param_1 + 0x2a,0);
        FUN_0439fe60(param_1 + 2,local_d0,param_1,DAT_091c2058);
        return;
      }
    }
LAB_0439dc98:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar15 = local_d0._0_8_;
    if ((long *)local_d0._0_8_ != (long *)0x0) {
      lVar10 = *(long *)local_d0._0_8_;
      uVar18 = local_d0._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_091868c0) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_0439dd58;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(local_d0._0_8_,DAT_091868c0,2);
LAB_0439dd58:
      (*(code *)*puVar7)(uVar15,uVar18,puVar7[1]);
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar17 = (long *)(param_1 + 0x30);
    if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = CakeOrder_MapLevelMetadataConfig__GetLevelConfig
                       (*plVar17,*(undefined4 *)(*(long *)(lVar13 + 0x30) + 0x1c),0);
    if (lVar10 == 0) {
      if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar14 = *(undefined8 *)(param_1 + 10);
      local_80._0_4_ = *(int *)(*(long *)(lVar13 + 0x30) + 0x1c) + 1;
      uVar15 = FUN_03f5c42c(DAT_09535420,local_80);
      uVar20 = thunk_FUN_03fc39d4(&DAT_092076f0);
      uVar15 = System_String__Format(uVar20,uVar14,uVar15,0);
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar20 = thunk_FUN_03f9944c();
      System_InvalidOperationException___ctor(uVar20,uVar15,0);
      uVar15 = thunk_FUN_03fc39d4(&DAT_091ecb10);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar20,uVar15);
    }
    lVar8 = *(long *)(lVar13 + 0x30);
    uVar15 = CakeOrder_SingleLevelMetadata__Clone(lVar10,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar7 = (undefined8 *)(lVar8 + 0x28);
    *puVar7 = uVar15;
    thunk_FUN_03f5d7b8(puVar7);
    if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + 0x48);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = UnityEngine_Object__op_Inequality(uVar15,0,0);
    if ((uVar11 & 1) == 0) {
LAB_0439ddfc:
      if (*plVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar4 = CakeOrder_MapLevelMetadataConfig__get_NumLevels(*plVar17,0);
      lVar10 = *(long *)(lVar13 + 0x30);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    else {
      lVar10 = *(long *)(lVar13 + 0x30);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar10 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar4 = *(int *)(*(long *)(lVar10 + 0x48) + 0x4c);
      if (iVar4 < 1) goto LAB_0439ddfc;
    }
    uVar15 = DAT_091b48d8;
    *(bool *)(lVar10 + 0xd0) = *(int *)(lVar10 + 0x1c) == iVar4 + -1;
    uVar11 = FUN_05a8eda4(uVar15);
    if ((uVar11 & 1) != 0) {
      lVar10 = *(long *)(DAT_091b48d0 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *(long *)(*(long *)(lVar13 + 0x30) + 0x28);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (**(long **)(lVar10 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_AudioManagerCakeOrder__ApplyWeather
                (0,**(long **)(lVar10 + 0xb8),*(undefined4 *)(lVar8 + 0x10),0);
    }
    local_80._8_8_ = *(undefined8 *)(param_1 + 0xe);
    local_80._0_8_ = *(undefined8 *)(param_1 + 0xc);
    local_70 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_1a8 = local_80._8_8_;
    plStack_1b0 = (long *)local_80._0_8_;
    uStack_1a0 = local_70;
    UnityEngine_AddressableAssets_Addressables__ReleaseInstance(&plStack_1b0,0);
    *plVar17 = 0;
    thunk_FUN_03f5d7b8(plVar17,0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_a0 = Cysharp_Threading_Tasks_UniTask__NextFrame(0);
    thunk_FUN_03f5d7b8(local_a0,0);
    local_d0 = local_a0;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar15 = local_d0._0_8_;
    if ((long *)local_d0._0_8_ != (long *)0x0) {
      lVar10 = *(long *)local_d0._0_8_;
      uVar18 = local_d0._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_091868c0) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0439dfd4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(local_d0._0_8_,DAT_091868c0,0);
LAB_0439dfd4:
      iVar4 = (*(code *)*puVar7)(uVar15,uVar18,puVar7[1]);
      if (iVar4 == 0) {
        *param_1 = 5;
        *(undefined1 (*) [16])(param_1 + 0x2a) = local_d0;
        thunk_FUN_03f5d7b8(param_1 + 0x2a,0);
        FUN_0439fe60(param_1 + 2,local_d0,param_1,DAT_091c2058);
        return;
      }
    }
LAB_0439dfe8:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar15 = local_d0._0_8_;
    if ((long *)local_d0._0_8_ != (long *)0x0) {
      lVar10 = *(long *)local_d0._0_8_;
      uVar18 = local_d0._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_091868c0) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_0439e0a8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(local_d0._0_8_,DAT_091868c0,2);
LAB_0439e0a8:
      (*(code *)*puVar7)(uVar15,uVar18,puVar7[1]);
    }
    local_80._8_8_ = *(undefined8 *)(param_1 + 0x26);
    local_80._0_8_ = *(undefined8 *)(param_1 + 0x24);
    local_70 = *(undefined8 *)(param_1 + 0x28);
    uVar11 = FUN_04be2f0c(local_80,DAT_091d23d0);
    if ((uVar11 & 1) != 0) {
      if (iVar5 == 6) {
LAB_0439e0e8:
        local_d0 = *(undefined1 (*) [16])(param_1 + 0x2a);
        param_1[0x2a] = 0;
        param_1[0x2b] = 0;
        param_1[0x2c] = 0;
        param_1[0x2d] = 0;
        *param_1 = -1;
      }
      else {
        lVar10 = FUN_0640f7ac(param_1 + 0x24,DAT_09197800);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar15 = FUN_04b7c324(lVar10,DAT_091cd9b0);
        *(undefined8 *)(param_1 + 0x32) = uVar15;
        thunk_FUN_03f5d7b8();
        lVar10 = DAT_091c0310;
        lVar16 = *(long *)(param_1 + 0x32);
        uVar15 = *(undefined8 *)(param_1 + 10);
        lVar8 = *(long *)(DAT_091c0310 + 0x38);
        if (lVar8 == 0) {
          FUN_03f95ac8(DAT_091c0310);
          lVar8 = *(long *)(lVar10 + 0x38);
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar10 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_03f95a6c();
        }
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar21 = CakeOrder_MapToolConfig__SetUpAfterSpawn
                            (lVar16,uVar15,**(undefined8 **)(lVar10 + 0xb8),0);
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_a0 = auVar21;
        thunk_FUN_03f5d7b8(local_a0,0);
        local_d0 = local_a0;
        if (DAT_095162d4 == '\0') {
          FUN_03f5c2a4(&DAT_0918c610);
          DAT_095162d4 = '\x01';
        }
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_095162d5 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d5 = '\x01';
        }
        uVar15 = local_d0._0_8_;
        if ((long *)local_d0._0_8_ != (long *)0x0) {
          lVar10 = *(long *)local_d0._0_8_;
          uVar18 = local_d0._8_8_ & 0xffff;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_091868c0) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0439e890;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(local_d0._0_8_,DAT_091868c0,0);
LAB_0439e890:
          iVar5 = (*(code *)*puVar7)(uVar15,uVar18,puVar7[1]);
          if (iVar5 == 0) {
            *param_1 = 6;
            *(undefined1 (*) [16])(param_1 + 0x2a) = local_d0;
            thunk_FUN_03f5d7b8(param_1 + 0x2a,0);
            FUN_0439fe60(param_1 + 2,local_d0,param_1,DAT_091c2058);
            return;
          }
        }
      }
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar15 = local_d0._0_8_;
      if ((long *)local_d0._0_8_ != (long *)0x0) {
        lVar10 = *(long *)local_d0._0_8_;
        uVar18 = local_d0._8_8_ & 0xffff;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_091868c0) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_0439e308;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(local_d0._0_8_,DAT_091868c0,2);
LAB_0439e308:
        (*(code *)*puVar7)(uVar15,uVar18,puVar7[1]);
      }
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar13 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(*(long *)(lVar13 + 0x30) + 0x60) = *(undefined8 *)(param_1 + 0x32);
      thunk_FUN_03f5d7b8();
      CakeOrder_InGame_LevelPlayLoadAndSetupControl__BuildToolUpgrades
                (lVar13,*(undefined8 *)(param_1 + 0x32),*(undefined8 *)(param_1 + 10),
                 *(undefined8 *)(param_1 + 8));
      param_1[0x32] = 0;
      param_1[0x33] = 0;
      thunk_FUN_03f5d7b8(param_1 + 0x32,0);
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_80 = Cysharp_Threading_Tasks_UniTask__NextFrame(0);
    thunk_FUN_03f5d7b8(local_80,0);
    local_d0 = local_80;
    if (DAT_095162d4 == '\0') {
      FUN_03f5c2a4(&DAT_0918c610);
      DAT_095162d4 = '\x01';
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095162d5 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d5 = '\x01';
    }
    uVar15 = local_d0._0_8_;
    if ((long *)local_d0._0_8_ != (long *)0x0) {
      lVar10 = *(long *)local_d0._0_8_;
      uVar18 = local_d0._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_091868c0) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0439e430;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(local_d0._0_8_,DAT_091868c0,0);
LAB_0439e430:
      iVar5 = (*(code *)*puVar7)(uVar15,uVar18,puVar7[1]);
      if (iVar5 == 0) {
        *param_1 = 7;
        *(undefined1 (*) [16])(param_1 + 0x2a) = local_d0;
        thunk_FUN_03f5d7b8(param_1 + 0x2a,0);
        FUN_0439fe60(param_1 + 2,local_d0,param_1,DAT_091c2058);
        return;
      }
    }
  }
  else {
    if (iVar5 < 6) {
      if (iVar5 == 4) {
        local_d0 = *(undefined1 (*) [16])(param_1 + 0x2a);
        iVar5 = -1;
        param_1[0x2a] = 0;
        param_1[0x2b] = 0;
        param_1[0x2c] = 0;
        param_1[0x2d] = 0;
        *param_1 = -1;
        goto LAB_0439dc98;
      }
      if (iVar5 != 5) goto LAB_0439c26c;
      local_d0 = *(undefined1 (*) [16])(param_1 + 0x2a);
      iVar5 = -1;
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      *param_1 = -1;
      goto LAB_0439dfe8;
    }
    if (iVar5 == 6) goto LAB_0439e0e8;
    if (iVar5 != 7) goto LAB_0439c26c;
    local_d0 = *(undefined1 (*) [16])(param_1 + 0x2a);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    *param_1 = -1;
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar15 = local_d0._0_8_;
  if ((long *)local_d0._0_8_ != (long *)0x0) {
    lVar10 = *(long *)local_d0._0_8_;
    uVar18 = local_d0._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_091868c0) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_0439e504;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(local_d0._0_8_,DAT_091868c0,2);
LAB_0439e504:
    (*(code *)*puVar7)(uVar15,uVar18,puVar7[1]);
  }
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar10 = *(long *)(lVar13 + 0x30);
  uVar15 = *(undefined8 *)(lVar13 + 0x70);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar11 = UnityEngine_Object__op_Implicit(uVar15,0);
  if ((uVar11 & 1) == 0) {
    uVar15 = thunk_FUN_03f9944c(DAT_09194ba8);
    CakeOrder_InGame_StackGameplayConfig_StackConfig___ctor(uVar15,0);
  }
  else {
    if (*(long *)(lVar13 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x70) + 0x20);
  }
  if (lVar10 != 0) {
    puVar7 = (undefined8 *)(lVar10 + 0xb0);
    *puVar7 = uVar15;
    thunk_FUN_03f5d7b8(puVar7,uVar15);
    lVar10 = *(long *)(lVar13 + 0x30);
    uVar15 = *(undefined8 *)(lVar13 + 0x80);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = UnityEngine_Object__op_Implicit(uVar15,0);
    if ((uVar11 & 1) == 0) {
      uVar15 = thunk_FUN_03f9944c(DAT_09194430);
      CakeOrder_InGame_ServeSlotConfig_SlotConfig___ctor(uVar15,0);
    }
    else {
      if (*(long *)(lVar13 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x80) + 0x20);
    }
    if (lVar10 != 0) {
      puVar7 = (undefined8 *)(lVar10 + 0xb8);
      *puVar7 = uVar15;
      thunk_FUN_03f5d7b8(puVar7,uVar15);
      uVar20 = *(undefined8 *)(lVar13 + 0x30);
      uVar15 = thunk_FUN_03f9944c(DAT_09182258);
      CakeOrder_InGame_CakeLevelRuntimeData___ctor(uVar15,uVar20);
      *(undefined8 *)(lVar13 + 0x38) = uVar15;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar13 + 0x38),uVar15);
      CakeOrder_InGame_LevelPlayLoadAndSetupControl__BindCustomerTracking
                (lVar13,*(undefined8 *)(lVar13 + 0x38));
      *param_1 = -2;
      piVar12 = param_1 + 8;
      piVar12[0] = 0;
      piVar12[1] = 0;
      thunk_FUN_03f5d7b8(piVar12,0);
      piVar12 = param_1 + 10;
      piVar12[0] = 0;
      piVar12[1] = 0;
      thunk_FUN_03f5d7b8(piVar12,0);
      param_1[0x28] = 0;
      cVar3 = DAT_095162d8;
      param_1[0x29] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      if (cVar3 == '\0') {
        FUN_03f5c2a4(&DAT_091866a8);
        DAT_095162d8 = '\x01';
      }
      plVar17 = *(long **)(param_1 + 2);
      if (plVar17 != (long *)0x0) {
        lVar13 = *plVar17;
        uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_091866a8) {
              puVar7 = (undefined8 *)(lVar13 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_0439e6f4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar17,DAT_091866a8,2);
LAB_0439e6f4:
        (*(code *)*puVar7)(plVar17,puVar7[1]);
      }
      return;
    }
  }
LAB_0439e950:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

