// rea decompile_all
// name: AnhPD.FoodOrder.OrderModel$$Init
// address: 0x4208784
// body: available
// range: 0x4208784-0x42089cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42089c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42089cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderModel__Init(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_150 [72];
  undefined1 auStack_108 [72];
  undefined8 local_c0;
  undefined8 *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09516cc3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3b60);
    FUN_03f5c2a4(&DAT_091a3b68);
    FUN_03f5c2a4(&DAT_091a3b70);
    FUN_03f5c2a4(&DAT_091b34f8);
    FUN_03f5c2a4(&DAT_091b3500);
    FUN_03f5c2a4(&DAT_091aed38);
    FUN_03f5c2a4(&DAT_091aed10);
    FUN_03f5c2a4(&DAT_0917c850);
    FUN_03f5c2a4(&DAT_091930f0);
    DAT_09516cc3 = 1;
  }
  local_60 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  if (param_2 == 0) {
    param_2 = thunk_FUN_03f9944c(DAT_0917c850);
    FUN_057ee92c(param_2,DAT_091aed10);
  }
  if (param_1 != 0) {
    plVar9 = (long *)(param_1 + 0x18);
    *plVar9 = param_2;
    thunk_FUN_03f5d7b8(plVar9,param_2);
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
      if (*plVar9 != 0) {
        FUN_057f00fc(&local_b0,*plVar9,DAT_091aed38);
        local_c0 = 0;
        puStack_b8 = &local_b0;
        while( true ) {
          uVar3 = FUN_071c1a7c(&local_b0,DAT_091a3b68);
          if ((uVar3 & 1) == 0) {
            FUN_071c1a78(&local_b0,DAT_091a3b60);
            *(undefined4 *)(param_1 + 0x20) = 0;
            return;
          }
          lVar8 = *(long *)(param_1 + 0x10);
          memcpy(auStack_108,&local_a0,0x48);
          uVar4 = thunk_FUN_03f9944c(DAT_091930f0);
          memcpy(auStack_150,auStack_108,0x48);
          AnhPD_FoodOrder_OrderModel_OrderSlot___ctor(uVar4,auStack_150,0);
          lVar6 = DAT_091b34f8;
          if (lVar8 == 0) break;
          lVar7 = *(long *)(lVar8 + 0x10);
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar7 == 0) break;
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
            *puVar5 = uVar4;
            thunk_FUN_03f5d7b8(puVar5,uVar4);
          }
          else {
            FUN_057e0c68(lVar8,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

