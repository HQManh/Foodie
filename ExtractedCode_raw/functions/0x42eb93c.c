// rea decompile_all
// name: CakeOrder.LiveOpsImplement.LiveOpBehavior7DayLogin$$ParseConfigWithDays
// address: 0x42eb93c
// body: available
// range: 0x42eb93c-0x42ec187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ec180 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ec184 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_LiveOpsImplement_LiveOpBehavior7DayLogin__ParseConfigWithDays(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  int local_d4;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  if ((DAT_09517484 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a6228);
    FUN_03f5c2a4(&DAT_091a6230);
    FUN_03f5c2a4(&DAT_091a6238);
    FUN_03f5c2a4(&DAT_091a9218);
    FUN_03f5c2a4(&DAT_091b32d8);
    FUN_03f5c2a4(&DAT_091b3310);
    FUN_03f5c2a4(&DAT_091b32e0);
    FUN_03f5c2a4(&DAT_091b32d0);
    FUN_03f5c2a4(&DAT_091b3300);
    FUN_03f5c2a4(&DAT_091b32e8);
    FUN_03f5c2a4(&DAT_091b32f0);
    FUN_03f5c2a4(&DAT_0917d580);
    FUN_03f5c2a4(&DAT_0917d578);
    FUN_03f5c2a4(&DAT_091924c8);
    FUN_03f5c2a4(&DAT_091924d0);
    FUN_03f5c2a4(&DAT_091924d8);
    FUN_03f5c2a4(&DAT_091ba7c0);
    FUN_03f5c2a4(&DAT_091ba7b8);
    FUN_03f5c2a4(&DAT_091ba7c8);
    FUN_03f5c2a4(&DAT_091ba7d0);
    FUN_03f5c2a4(&DAT_091ba7d8);
    FUN_03f5c2a4(&DAT_091ba7e0);
    FUN_03f5c2a4(&DAT_0917e7a0);
    FUN_03f5c2a4(&DAT_09213e68);
    FUN_03f5c2a4(&DAT_09213e80);
    FUN_03f5c2a4(&DAT_09213e90);
    FUN_03f5c2a4(&DAT_09213e70);
    FUN_03f5c2a4(&DAT_09213e88);
    FUN_03f5c2a4(&DAT_091f7380);
    DAT_09517484 = 1;
  }
  local_68 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = 0;
  lVar5 = thunk_FUN_03f9944c(DAT_0917e7a0);
  FUN_060e61e4(lVar5,DAT_091ba7b8);
  lVar6 = FUN_03f5c394(DAT_0917fcc8,1);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_042ec184:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined2 *)(lVar6 + 0x20) = 0x7c;
    if ((param_1 != 0) && (lVar6 = System_String__Split(param_1,lVar6,1,0), lVar6 != 0)) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        uVar16 = 0;
        do {
          if (uVar1 <= uVar16) goto LAB_042ec184;
          lVar14 = *(long *)(lVar6 + uVar16 * 8 + 0x20);
          if ((lVar14 == 0) || (lVar7 = System_String__Split(lVar14,0x3b,0,0), lVar7 == 0))
          goto LAB_042ec180;
          if (*(int *)(lVar7 + 0x18) < 2) {
LAB_042ec0f8:
            uVar8 = System_String__Concat(DAT_09213e90,lVar14,DAT_091f7380,0);
LAB_042ebf90:
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835d0);
            }
            UnityEngine_Debug__LogWarning(uVar8,0);
            return 0;
          }
          if (*(long *)(lVar7 + 0x20) == 0) goto LAB_042ec180;
          uVar8 = System_String__Trim(*(long *)(lVar7 + 0x20),0);
          uVar9 = System_Int32__TryParse(uVar8,(long)&local_68 + 4,0);
          if (((uVar9 & 1) == 0) || (local_68._4_4_ < 1)) goto LAB_042ec0f8;
          if (lVar5 == 0) goto LAB_042ec180;
          uVar9 = FUN_060e6b38(lVar5,local_68._4_4_,DAT_091ba7c0);
          if ((uVar9 & 1) != 0) {
            local_d0 = CONCAT44(local_d0._4_4_,local_68._4_4_);
            uVar8 = FUN_03f5c42c(DAT_09535420,&local_d0);
            puVar13 = &DAT_09213e68;
LAB_042ec168:
            uVar8 = System_String__Format(*puVar13,uVar8,0);
            goto LAB_042ebf90;
          }
          lVar14 = thunk_FUN_03f9944c(DAT_0917d578);
          FUN_057e0400(lVar14,DAT_091b32d0);
          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_042ec184;
          lVar15 = *(long *)(lVar7 + 0x28);
          lVar7 = FUN_03f5c394(DAT_0917fcc8,1);
          if (lVar7 == 0) goto LAB_042ec180;
          if (*(int *)(lVar7 + 0x18) == 0) goto LAB_042ec184;
          *(undefined2 *)(lVar7 + 0x20) = 0x2c;
          if ((lVar15 == 0) || (lVar7 = System_String__Split(lVar15,lVar7,1,0), lVar7 == 0))
          goto LAB_042ec180;
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (0 < (int)uVar1) {
            uVar17 = 0;
            do {
              if (uVar1 <= uVar17) goto LAB_042ec184;
              lVar15 = *(long *)(lVar7 + (long)(int)uVar17 * 8 + 0x20);
              if ((lVar15 == 0) || (lVar10 = System_String__Split(lVar15,0x3a,0,0), lVar10 == 0))
              goto LAB_042ec180;
              if ((*(int *)(lVar10 + 0x18) < 2) ||
                 (uVar9 = System_String__IsNullOrWhiteSpace(*(undefined8 *)(lVar10 + 0x20),0),
                 (uVar9 & 1) != 0)) {
LAB_042ebf54:
                local_d0 = CONCAT44(local_d0._4_4_,local_68._4_4_);
                uVar8 = FUN_03f5c42c(DAT_09535420,&local_d0);
                uVar8 = System_String__Format(DAT_09213e80,uVar8,lVar15,0);
                goto LAB_042ebf90;
              }
              if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_042ec184;
              if (*(long *)(lVar10 + 0x28) == 0) goto LAB_042ec180;
              uVar8 = System_String__Trim(*(long *)(lVar10 + 0x28),0);
              uVar9 = System_Int32__TryParse(uVar8,&local_68,0);
              if (((uVar9 & 1) == 0) || ((int)local_68 < 1)) goto LAB_042ebf54;
              lVar15 = thunk_FUN_03f9944c(DAT_091924d0);
              System_Object___ctor(lVar15,0);
              if (*(int *)(lVar10 + 0x18) == 0) goto LAB_042ec184;
              if ((*(long *)(lVar10 + 0x20) == 0) ||
                 (uVar8 = System_String__Trim(*(long *)(lVar10 + 0x20),0), lVar15 == 0))
              goto LAB_042ec180;
              *(undefined8 *)(lVar15 + 0x10) = uVar8;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar15 + 0x10),uVar8);
              *(int *)(lVar15 + 0x18) = (int)local_68;
              lVar10 = DAT_091b32d8;
              if (lVar14 == 0) goto LAB_042ec180;
              lVar12 = *(long *)(lVar14 + 0x10);
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_042ec180;
              uVar1 = *(uint *)(lVar14 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                plVar11 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                *plVar11 = lVar15;
                thunk_FUN_03f5d7b8(plVar11,lVar15);
              }
              else {
                FUN_057e0c68(lVar14,lVar15,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              uVar1 = *(uint *)(lVar7 + 0x18);
              uVar17 = uVar17 + 1;
            } while ((int)uVar17 < (int)uVar1);
          }
          if (lVar14 == 0) goto LAB_042ec180;
          uVar2 = local_68._4_4_;
          if (*(int *)(lVar14 + 0x18) == 0) {
            local_d0 = CONCAT44(local_d0._4_4_,local_68._4_4_);
            uVar8 = FUN_03f5c42c(DAT_09535420,&local_d0);
            puVar13 = &DAT_09213e70;
            goto LAB_042ec168;
          }
          lVar7 = thunk_FUN_03f9944c(DAT_091924d8);
          System_Object___ctor(lVar7,0);
          uVar8 = DAT_091b32f0;
          if (lVar7 == 0) goto LAB_042ec180;
          *(int *)(lVar7 + 0x10) = local_68._4_4_;
          lVar15 = FUN_057e0998(lVar14,0,uVar8);
          if (lVar15 == 0) goto LAB_042ec180;
          *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar15 + 0x10);
          thunk_FUN_03f5d7b8();
          lVar15 = FUN_057e0998(lVar14,0,DAT_091b32f0);
          if (lVar15 == 0) goto LAB_042ec180;
          *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar15 + 0x18);
          uVar8 = FUN_057e28a4(lVar14,DAT_091b32e0);
          *(undefined8 *)(lVar7 + 0x28) = uVar8;
          thunk_FUN_03f5d7b8();
          FUN_060e6868(lVar5,uVar2,lVar7,DAT_091ba7e0);
          uVar1 = *(uint *)(lVar6 + 0x18);
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)uVar1);
      }
      if (lVar5 != 0) {
        iVar3 = FUN_060e6974(lVar5,DAT_091ba7c8);
        if (iVar3 == 0) {
          return 0;
        }
        lVar6 = FUN_060e6994(lVar5,DAT_091ba7d0);
        if (lVar6 != 0) {
          FUN_055b6d60(&local_d0,lVar6,DAT_091a9218);
          iVar3 = 1;
          puStack_98 = puStack_c8;
          local_a0 = local_d0;
          uStack_88 = uStack_b8;
          local_90 = uStack_c0;
          uStack_78 = uStack_a8;
          local_80 = local_b0;
          local_d0 = 0;
          puStack_c8 = &local_a0;
          while (uVar16 = FUN_07256820(&local_a0,DAT_091a6230), (uVar16 & 1) != 0) {
            iVar4 = FUN_07256858(&local_a0,DAT_091a6238);
            if (iVar3 != iVar4) {
              local_d4 = iVar3;
              uVar8 = FUN_03f5c42c(DAT_09535420,&local_d4);
              uVar8 = System_String__Format(DAT_09213e88,uVar8,0);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              UnityEngine_Debug__LogWarning(uVar8,0);
              FUN_072567e8(&local_a0,DAT_091a6228);
              return 0;
            }
            iVar3 = iVar3 + 1;
          }
          FUN_072567e8(&local_a0,DAT_091a6228);
          lVar6 = thunk_FUN_03f9944c(DAT_091924c8);
          System_Object___ctor(lVar6,0);
          uVar8 = FUN_060e6a28(lVar5,DAT_091ba7d8);
          lVar5 = thunk_FUN_03f9944c(DAT_0917d580);
          FUN_057e053c(lVar5,uVar8,DAT_091b3300);
          if ((lVar5 != 0) && (uVar8 = FUN_057e28a4(lVar5,DAT_091b3310), lVar6 != 0)) {
            *(undefined8 *)(lVar6 + 0x10) = uVar8;
            thunk_FUN_03f5d7b8();
            return lVar6;
          }
        }
      }
    }
  }
LAB_042ec180:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

