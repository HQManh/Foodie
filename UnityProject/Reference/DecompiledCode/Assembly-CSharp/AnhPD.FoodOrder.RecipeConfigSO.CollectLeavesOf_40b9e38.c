// rea decompile_all
// name: AnhPD.FoodOrder.RecipeConfigSO$$CollectLeavesOf
// address: 0x40b9e38
// body: available
// range: 0x40b9e38-0x40ba10b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ba104 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ba108 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_RecipeConfigSO__CollectLeavesOf
               (long param_1,undefined8 param_2,long param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong local_58;
  
  if ((DAT_09515f43 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091af660);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091af630);
    FUN_03f5c2a4(&DAT_091af638);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_091b6fb8);
    FUN_03f5c2a4(&DAT_0917e018);
    FUN_03f5c2a4(&DAT_091eedd0);
    FUN_03f5c2a4(&DAT_09193978);
    DAT_09515f43 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09193978);
  System_Object___ctor(lVar2,0);
  if (lVar2 == 0) goto LAB_040ba108;
  puVar6 = (undefined8 *)(lVar2 + 0x10);
  *puVar6 = param_2;
  thunk_FUN_03f5d7b8(puVar6,param_2);
  lVar3 = AnhPD_FoodOrder_RecipeConfigSO__GetPieceConfig(param_1,*puVar6);
  if (((lVar3 == 0) || (*(int *)(lVar3 + 0x10) != 1)) &&
     (lVar3 = *(long *)(param_1 + 0x28), lVar3 != 0)) {
    uVar4 = thunk_FUN_03f9944c(DAT_0917e018);
    FUN_05d78cfc(uVar4,lVar2,DAT_091eedd0,0);
    lVar2 = FUN_057e1328(lVar3,uVar4,DAT_091af660);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0x18) == 0)) goto LAB_040ba004;
    local_58 = 0;
    FUN_05c3078c(&local_58,*(undefined4 *)(*(long *)(lVar2 + 0x18) + 0x18),DAT_091b6f98);
    lVar3 = 0;
    if (((local_58 & 0xff) != 0) && (0 < (int)(local_58 >> 0x20))) {
      if (*(long *)(lVar2 + 0x18) == 0) goto LAB_040ba108;
      lVar2 = FUN_057e0998(*(long *)(lVar2 + 0x18),0,DAT_091af638);
      if (lVar2 == 0) goto LAB_040ba004;
      lVar3 = *(long *)(lVar2 + 0x10);
    }
  }
  else {
LAB_040ba004:
    lVar3 = 0;
  }
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0x18);
    if (((param_4 < 8) && (lVar3 != 0)) && (0 < (int)*(ulong *)(lVar3 + 0x18))) {
      uVar7 = 0;
      uVar5 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar2 = *(long *)(lVar3 + 0x20 + uVar7 * 8);
        if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == 0)) &&
           (uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar2 + 0x18),0), (uVar5 & 1) == 0)
           ) {
          AnhPD_FoodOrder_RecipeConfigSO__CollectLeavesOf
                    (param_1,*(undefined8 *)(lVar2 + 0x18),param_3,param_4 + 1);
        }
        uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar3 + 0x18));
      if (*(uint *)(param_3 + 0x18) != uVar1) {
        return;
      }
    }
    lVar2 = DAT_091b0570;
    lVar3 = *(long *)(param_3 + 0x10);
    uVar4 = *puVar6;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    if (lVar3 != 0) {
      if (uVar1 < *(uint *)(lVar3 + 0x18)) {
        *(uint *)(param_3 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(param_3,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                    );
      }
      return;
    }
  }
LAB_040ba108:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

