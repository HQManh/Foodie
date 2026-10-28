// rea decompile_all
// name: CakeOrder.Home.UIListCustomerInMap.<LoadCharactersAsync>d__12$$MoveNext
// address: 0x432cba4
// body: available
// range: 0x432cba4-0x432ccff inclusive
// range: 0x432cd10-0x432cf97 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x432ccf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432ccfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432cf90 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432cf94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0432cf8c) */

void CakeOrder_Home_UIListCustomerInMap_<LoadCharactersAsync>d__12__MoveNext(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  int *piStack_88;
  int **local_80;
  undefined4 local_68;
  undefined1 local_60 [16];
  int local_4c;
  int *local_48;
  
  local_48 = param_1;
  if ((DAT_095176b3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2858);
    FUN_03f5c2a4(&DAT_091a4af0);
    FUN_03f5c2a4(&DAT_091a4af8);
    FUN_03f5c2a4(&DAT_091a4b00);
    FUN_03f5c2a4(&DAT_091b1438);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095176b3 = 1;
  }
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_68 = 0;
  local_4c = *param_1;
  if (local_4c != 0) {
    if (*(long *)(param_1 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 4) + 0x60);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(local_a8,lVar4,DAT_091b1438);
    piStack_88 = (int *)local_a8._8_8_;
    local_90 = local_a8._0_8_;
    local_80 = (int **)local_98;
    *(undefined8 *)(local_48 + 8) = local_a8._8_8_;
    *(undefined8 *)(local_48 + 6) = local_a8._0_8_;
    *(undefined8 *)(local_48 + 10) = local_98;
    thunk_FUN_03f5d7b8(local_48 + 6,0);
    piStack_88 = &local_4c;
    local_90 = 0;
    local_80 = &local_48;
    if (local_4c != 0) goto LAB_0432cd9c;
  }
  local_80 = &local_48;
  piStack_88 = &local_4c;
  local_90 = 0;
  local_4c = -1;
  local_60 = *(undefined1 (*) [16])(local_48 + 0xc);
  local_48[0xc] = 0;
  local_48[0xd] = 0;
  local_48[0xe] = 0;
  local_48[0xf] = 0;
  *local_48 = -1;
  do {
    do {
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar1 = local_60._0_8_;
      if ((long *)local_60._0_8_ != (long *)0x0) {
        lVar4 = *(long *)local_60._0_8_;
        uVar9 = local_60._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_0432cd8c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0432cd8c:
        (*(code *)*puVar5)(uVar1,uVar9,puVar5[1]);
      }
LAB_0432cd9c:
      do {
        uVar6 = FUN_071bd28c(local_48 + 6,DAT_091a4af8);
        if ((uVar6 & 1) == 0) {
          uVar8 = 8;
          goto LAB_0432ceb4;
        }
        lVar4 = *(long *)(local_48 + 10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = UnityEngine_Object__op_Equality(lVar4,0,0);
      } while ((uVar6 & 1) != 0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar10 = CakeOrder_Home_UIItemCustomerInMap__LoadCharacterAsync(lVar4);
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_a8 = auVar10;
      thunk_FUN_03f5d7b8(local_a8,0);
      uVar2 = local_a8._8_8_;
      uVar1 = local_a8._0_8_;
      local_60 = local_a8;
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
    } while ((long *)uVar1 == (long *)0x0);
    lVar4 = *(long *)uVar1;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0432cf30;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(uVar1,DAT_091868c0,0);
LAB_0432cf30:
    iVar3 = (*(code *)*puVar5)(uVar1,uVar2 & 0xffffffff,puVar5[1]);
    if (iVar3 == 0) {
      local_4c = 0;
      *local_48 = 0;
      *(undefined1 (*) [16])(local_48 + 0xc) = local_60;
      thunk_FUN_03f5d7b8(local_48 + 0xc,0);
      FUN_04340bcc(local_48 + 2,local_60,local_48,DAT_091c2858);
      uVar8 = 7;
LAB_0432ceb4:
      if (local_4c < 0) {
        FUN_071bd288(*local_80 + 6,DAT_091a4af0);
      }
      if ((uVar8 | 8) == 8) {
        local_48[8] = 0;
        local_48[9] = 0;
        local_48[10] = 0;
        local_48[0xb] = 0;
        local_48[6] = 0;
        local_48[7] = 0;
        *local_48 = -2;
        FUN_042dada8(local_48 + 2,0);
      }
      return;
    }
  } while( true );
}

