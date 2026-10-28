// rea decompile_all
// name: CakeOrder.Home.Journey.UIHomeTabPageJourney$$BuildMilestoneSource
// address: 0x435502c
// body: available
// range: 0x435502c-0x43552ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43552ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIHomeTabPageJourney__BuildMilestoneSource(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  
  if ((DAT_095177e0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b3160);
    FUN_03f5c2a4(&DAT_091b3168);
    FUN_03f5c2a4(&DAT_09191f40);
    FUN_03f5c2a4(&DAT_091b49f0);
    FUN_03f5c2a4(&DAT_091b49f8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095177e0 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x128);
  if (lVar8 != 0) {
    iVar10 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar10) {
      System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar10,0);
    }
    uVar3 = FUN_05a8eda4(DAT_091b49f8);
    if ((uVar3 & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(DAT_091b49f0 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = **(long **)(lVar8 + 0xb8);
    }
    iVar10 = *(int *)(param_1 + 0x98);
    if (iVar10 < 1) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(lVar8,0,0);
      if ((uVar3 & 1) != 0) {
        return;
      }
      if (lVar8 != 0) {
        iVar10 = 0;
        while( true ) {
          iVar7 = 0;
          if (*(long *)(lVar8 + 0x20) != 0) {
            iVar7 = *(int *)(*(long *)(lVar8 + 0x20) + 0x18);
          }
          if (iVar7 <= iVar10) {
            return;
          }
          lVar4 = *(long *)(param_1 + 0x128);
          uVar5 = CakeOrder_Home_Journey_JourneyMilestoneRemoteConfig__Get(lVar8,iVar10);
          lVar2 = DAT_091b3160;
          if (lVar4 == 0) break;
          lVar11 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar11 == 0) break;
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar4,uVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          iVar10 = iVar10 + 1;
        }
      }
    }
    else if (param_2 != 0) {
      if (iVar10 <= *(int *)(param_2 + 0x20)) {
        do {
          lVar11 = *(long *)(param_1 + 0x128);
          lVar4 = thunk_FUN_03f9944c(DAT_09191f40);
          *(undefined4 *)(lVar4 + 0x10) = 10;
          System_Object___ctor(lVar4,0);
          *(int *)(lVar4 + 0x10) = iVar10;
          uVar5 = CakeOrder_Home_Journey_UIHomeTabPageJourney__DebugRewardsForLevel(lVar8,iVar10);
          *(undefined8 *)(lVar4 + 0x18) = uVar5;
          thunk_FUN_03f5d7b8();
          lVar2 = DAT_091b3160;
          if (lVar11 == 0) goto LAB_043552ec;
          lVar9 = *(long *)(lVar11 + 0x10);
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_043552ec;
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *plVar6 = lVar4;
            thunk_FUN_03f5d7b8(plVar6,lVar4);
          }
          else {
            FUN_057e0c68(lVar11,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          iVar10 = *(int *)(param_1 + 0x98) + iVar10;
        } while (iVar10 <= *(int *)(param_2 + 0x20));
      }
      return;
    }
  }
LAB_043552ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

