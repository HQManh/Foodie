// rea decompile_all
// name: AnhPD.FoodOrder.OrderBoard$$Split
// address: 0x4225fb8
// body: available
// range: 0x4225fb8-0x42263cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42263cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_OrderBoard__Split(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined1 auStack_138 [72];
  undefined1 auStack_f0 [72];
  undefined1 auStack_a8 [72];
  
  if ((DAT_09516d5e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091aa6a8);
    FUN_03f5c2a4(&DAT_091aed20);
    FUN_03f5c2a4(&DAT_091aed10);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091aa6a0);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091aed50);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917c850);
    FUN_03f5c2a4(&DAT_0917ba70);
    DAT_09516d5e = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0917ba70);
  FUN_057e0400(lVar2,DAT_091aa6a0);
  lVar3 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar3,DAT_091adc70);
  lVar4 = thunk_FUN_03f9944c(DAT_0917c850);
  FUN_057ee92c(lVar4,DAT_091aed10);
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar8 = 0;
      do {
        if (lVar3 == 0) goto LAB_042263cc;
        if (0 < *(int *)(lVar3 + 0x18)) {
          FUN_057eeec4(auStack_f0,param_2,iVar8,DAT_091aed50);
          lVar9 = *param_1;
          pcVar11 = *(code **)(lVar9 + 0x1a8);
          memcpy(auStack_a8,auStack_f0,0x48);
          uVar5 = (*pcVar11)(param_1,lVar4,auStack_a8,*(undefined8 *)(lVar9 + 0x1b0));
          lVar9 = DAT_091aa6a8;
          if ((uVar5 & 1) == 0) {
            if (lVar2 == 0) goto LAB_042263cc;
            lVar4 = *(long *)(lVar2 + 0x10);
            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            if (lVar4 == 0) goto LAB_042263cc;
            uVar1 = *(uint *)(lVar2 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)(lVar2 + 0x18) = uVar1 + 1;
              plVar6 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
              *plVar6 = lVar3;
              thunk_FUN_03f5d7b8(plVar6,lVar3);
            }
            else {
              FUN_057e0c68(lVar2,lVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            lVar3 = thunk_FUN_03f9944c(DAT_0917c520);
            FUN_05796918(lVar3,DAT_091adc70);
            lVar4 = thunk_FUN_03f9944c(DAT_0917c850);
            FUN_057ee92c(lVar4,DAT_091aed10);
            if (lVar3 == 0) goto LAB_042263cc;
          }
        }
        lVar9 = DAT_091adc88;
        lVar7 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_042263cc;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(int *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = iVar8;
        }
        else {
          FUN_057971a8(lVar3,iVar8,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        FUN_057eeec4(auStack_138,param_2,iVar8,DAT_091aed50);
        if (lVar4 == 0) goto LAB_042263cc;
        memcpy(auStack_f0,auStack_138,0x48);
        lVar9 = DAT_091aed20;
        lVar7 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_042263cc;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar1 * 0x48;
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          memcpy((void *)(lVar7 + 0x20),auStack_f0,0x48);
          thunk_FUN_03f5d7b8(lVar7 + 0x20,0);
        }
        else {
          uVar10 = *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
          memcpy(auStack_a8,auStack_f0,0x48);
          FUN_057ef254(lVar4,auStack_a8,uVar10);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_2 + 0x18));
    }
    lVar4 = DAT_091aa6a8;
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) < 1) {
        return lVar2;
      }
      if (lVar2 != 0) {
        lVar9 = *(long *)(lVar2 + 0x10);
        *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar2 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar2 + 0x18) = uVar1 + 1;
            plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *plVar6 = lVar3;
            thunk_FUN_03f5d7b8(plVar6,lVar3);
            return lVar2;
          }
          FUN_057e0c68(lVar2,lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                      );
          return lVar2;
        }
      }
    }
  }
LAB_042263cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

