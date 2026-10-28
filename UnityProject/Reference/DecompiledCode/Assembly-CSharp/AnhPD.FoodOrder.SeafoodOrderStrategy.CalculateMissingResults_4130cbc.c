// rea decompile_all
// name: AnhPD.FoodOrder.SeafoodOrderStrategy$$CalculateMissingResults
// address: 0x4130cbc
// body: available
// range: 0x4130cbc-0x4131313 inclusive
// range: 0x4131318-0x413131b inclusive
// range: 0x4131364-0x413138b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4131310 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4131318 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4131388 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_SeafoodOrderStrategy__CalculateMissingResults
               (long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  if ((DAT_09516336 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_091cafe8);
    FUN_03f5c2a4(&DAT_091cafa0);
    FUN_03f5c2a4(&DAT_091a3db8);
    FUN_03f5c2a4(&DAT_091a3dd0);
    FUN_03f5c2a4(&DAT_091a3dc0);
    FUN_03f5c2a4(&DAT_091a3dd8);
    FUN_03f5c2a4(&DAT_091a3dc8);
    FUN_03f5c2a4(&DAT_091a3de0);
    FUN_03f5c2a4(&DAT_09178100);
    FUN_03f5c2a4(&DAT_09178e60);
    FUN_03f5c2a4(&DAT_09178108);
    FUN_03f5c2a4(&DAT_091a8698);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_0917b460);
    FUN_03f5c2a4(&DAT_091af2b8);
    FUN_03f5c2a4(&DAT_091af280);
    FUN_03f5c2a4(&DAT_091af270);
    FUN_03f5c2a4(&DAT_091af290);
    FUN_03f5c2a4(&DAT_091af298);
    FUN_03f5c2a4(&DAT_0917c960);
    FUN_03f5c2a4(&DAT_091ef988);
    FUN_03f5c2a4(&DAT_091ef990);
    FUN_03f5c2a4(&DAT_091ef998);
    FUN_03f5c2a4(&DAT_09194378);
    DAT_09516336 = 1;
  }
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  if (*(int *)(DAT_09194378 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar7 = *(undefined8 **)(DAT_09194378 + 0xb8);
  lVar10 = puVar7[1];
  if (lVar10 == 0) {
    if (*(int *)(DAT_09194378 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar7 = *(undefined8 **)(DAT_09194378 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar10 = thunk_FUN_03f9944c(DAT_09178108);
    FUN_053082d8(lVar10,uVar12,DAT_091ef988,0);
    plVar5 = (long *)(*(long *)(DAT_09194378 + 0xb8) + 8);
    *plVar5 = lVar10;
    thunk_FUN_03f5d7b8(plVar5,lVar10);
  }
  if (*(int *)(DAT_09194378 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar7 = *(undefined8 **)(DAT_09194378 + 0xb8);
  lVar13 = puVar7[2];
  if (lVar13 == 0) {
    if (*(int *)(DAT_09194378 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar7 = *(undefined8 **)(DAT_09194378 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar13 = thunk_FUN_03f9944c(DAT_09178100);
    FUN_053080bc(lVar13,uVar12,DAT_091ef990,0);
    plVar5 = (long *)(*(long *)(DAT_09194378 + 0xb8) + 0x10);
    *plVar5 = lVar13;
    thunk_FUN_03f5d7b8(plVar5,lVar13);
  }
  lVar10 = FUN_04b04f2c(param_2,lVar10,lVar13,DAT_091cafe8);
  lVar13 = thunk_FUN_03f9944c(DAT_09176b28);
  FUN_06fc96ac(lVar13,DAT_0919f978);
  if (param_1 != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x80);
    if (*(int *)(DAT_09194378 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar7 = *(undefined8 **)(DAT_09194378 + 0xb8);
    lVar14 = puVar7[3];
    if (lVar14 == 0) {
      if (*(int *)(DAT_09194378 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar7 = *(undefined8 **)(DAT_09194378 + 0xb8);
      }
      uVar15 = *puVar7;
      lVar14 = thunk_FUN_03f9944c(DAT_09178e60);
      FUN_05324070(lVar14,uVar15,DAT_091ef998,0);
      plVar5 = (long *)(*(long *)(DAT_09194378 + 0xb8) + 0x18);
      *plVar5 = lVar14;
      thunk_FUN_03f5d7b8(plVar5,lVar14);
    }
    local_70 = FUN_04b04e7c(uVar12,lVar14,DAT_091cafa0);
    thunk_FUN_03f5d7b8(&local_70,local_70);
    lVar14 = thunk_FUN_03f9944c(DAT_0917c960);
    FUN_057e0400(lVar14,DAT_091af270);
    local_68 = lVar14;
    thunk_FUN_03f5d7b8(&local_68,lVar14);
    uVar12 = thunk_FUN_03f9944c(DAT_09179ee0);
    FUN_053eb530(uVar12,DAT_091a8698);
    local_78 = uVar12;
    thunk_FUN_03f5d7b8(&local_78,uVar12);
    if (*(long *)(param_1 + 0x80) != 0) {
      FUN_057e185c(&local_c8,*(long *)(param_1 + 0x80),DAT_091af280);
      local_80 = local_b8;
      puStack_88 = puStack_c0;
      local_90 = local_c8;
      local_c8 = 0;
      puStack_c0 = &local_90;
      while (uVar6 = FUN_071bd28c(&local_90,DAT_091a3dc0), (uVar6 & 1) != 0) {
        AnhPD_FoodOrder_SeafoodOrderStrategy__<CalculateMissingResults>g__Visit_21_3
                  (local_80,&local_78);
      }
      FUN_071bd288(&local_90,DAT_091a3db8);
      if (local_68 != 0) {
        iVar11 = *(int *)(local_68 + 0x18) + -1;
        if (-1 < iVar11) {
          do {
            if ((((local_68 == 0) ||
                 (lVar14 = FUN_057e0998(local_68,iVar11,DAT_091af298), lVar14 == 0)) ||
                (*(long *)(lVar14 + 0x18) == 0)) || (lVar10 == 0)) goto LAB_04131388;
            uVar12 = *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x18);
            uVar6 = FUN_06fcbf70(lVar10,uVar12,(long)&local_98 + 4,DAT_0919f9c8);
            iVar3 = local_98._4_4_;
            if ((uVar6 & 1) == 0) {
              iVar3 = 0;
            }
            if (param_3 == (long *)0x0) goto LAB_04131388;
            lVar8 = *param_3;
            uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar6 != 0) {
              piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917b460) {
                  puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_04131238;
                }
                uVar6 = uVar6 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917b460,1);
LAB_04131238:
            uVar6 = (*(code *)*puVar7)(param_3,uVar12,&local_98,puVar7[1]);
            if (lVar13 == 0) goto LAB_04131388;
            iVar4 = (int)local_98;
            if ((uVar6 & 1) == 0) {
              iVar4 = 0;
            }
            uVar2 = iVar3 - iVar4 & (iVar3 - iVar4 >> 0x1f ^ 0xffffffffU);
            FUN_06fca434(lVar13,uVar12,uVar2,DAT_0919f9f0);
            iVar3 = *(int *)(lVar14 + 0x28);
            if (iVar3 < 2) {
              iVar3 = 1;
            }
            if (*(long *)(lVar14 + 0x20) == 0) goto LAB_04131388;
            iVar4 = 0;
            if (iVar3 != 0) {
              iVar4 = (int)(uVar2 + iVar3 + -1) / iVar3;
            }
            FUN_057e185c(&local_c8,*(long *)(lVar14 + 0x20),DAT_091af2b8);
            local_b0 = local_c8;
            local_c8 = 0;
            puStack_a8 = puStack_c0;
            local_a0 = local_b8;
            puStack_c0 = &local_b0;
            while (uVar6 = FUN_071bd28c(&local_b0,DAT_091a3dd8), (uVar6 & 1) != 0) {
              if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(long *)(local_a0 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              AnhPD_FoodOrder_SeafoodOrderStrategy__AddCount
                        (lVar10,*(undefined8 *)(*(long *)(local_a0 + 0x10) + 0x18),iVar4);
            }
            FUN_071bd288(&local_b0,DAT_091a3dd0);
            bVar1 = 0 < iVar11;
            iVar11 = iVar11 + -1;
          } while (bVar1);
        }
        return lVar13;
      }
    }
  }
LAB_04131388:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

