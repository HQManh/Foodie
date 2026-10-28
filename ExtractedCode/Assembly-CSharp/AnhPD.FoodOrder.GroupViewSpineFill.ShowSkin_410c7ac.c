// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewSpineFill$$ShowSkin
// address: 0x410c7ac
// body: available
// range: 0x410c7ac-0x410ca03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x410c9f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x410c9fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x410ca00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewSpineFill__ShowSkin(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_095161ce & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918ad70);
    FUN_03f5c2a4(&DAT_0921b698);
    DAT_095161ce = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uVar2 = System_String__IsNullOrEmpty(param_2,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    uVar2 = FUN_057e1004(*(long *)(param_1 + 0x58),param_2,DAT_091b0590);
    lVar4 = DAT_091b0570;
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != 0) {
      lVar5 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *puVar6 = param_2;
          thunk_FUN_03f5d7b8(puVar6,param_2);
        }
        else {
          FUN_057e0c68(lVar3,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          lVar4 = Spine_Unity_SkeletonRenderer__get_Skeleton(*(long *)(param_1 + 0x20),0);
          if (lVar4 == 0) {
            return;
          }
          lVar3 = thunk_FUN_03f9944c(DAT_0918ad70);
          Spine_Skin___ctor(lVar3,DAT_0921b698,0);
          if (*(long *)(param_1 + 0x58) != 0) {
            FUN_057e185c(&local_48,*(long *)(param_1 + 0x58),DAT_091b05a8);
            while( true ) {
              uVar2 = FUN_071bd28c(&local_48,DAT_091a45a0);
              if ((uVar2 & 1) == 0) {
                FUN_071bd288(&local_48,DAT_091a4598);
                Spine_Skeleton__SetSkin(lVar4,lVar3,0);
                return;
              }
              if (*(long *)(lVar4 + 0x10) == 0) break;
              lVar5 = Spine_SkeletonData__FindSkin(*(long *)(lVar4 + 0x10),local_38,0);
              if (lVar5 != 0) {
                if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                Spine_Skin__AddSkin(lVar3,lVar5,0);
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

