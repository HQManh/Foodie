// rea decompile_all
// name: AnhPD.FoodOrder.OrderStrategy$$GetItemOrderSpecs
// address: 0x41d8754
// body: available
// range: 0x41d8754-0x41d895b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d8958 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_OrderStrategy__GetItemOrderSpecs(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [72];
  
  if ((DAT_09516a93 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aed20);
    FUN_03f5c2a4(&DAT_091aed10);
    FUN_03f5c2a4(&DAT_0917c850);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516a93 = 1;
  }
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  lVar2 = (**(code **)(*param_1 + 0x248))(param_1,param_2,*(undefined8 *)(*param_1 + 0x250));
  lVar3 = thunk_FUN_03f9944c(DAT_0917c850);
  FUN_057ee92c(lVar3,DAT_091aed10);
  if (param_2 != (long *)0x0) {
    uVar4 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    lVar6 = param_2[0xf];
    if (lVar2 == 0) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar5 = *(undefined8 **)(DAT_09189158 + 0xb8);
    }
    else {
      puVar5 = (undefined8 *)(lVar2 + 0x10);
    }
    uStack_158 = puVar5[1];
    local_160 = *puVar5;
    local_150 = puVar5[2];
    local_100 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    local_f0 = local_160;
    uStack_e8 = uStack_158;
    local_e0 = local_150;
    AnhPD_FoodOrder_OrderSpec___ctor
              (&local_140,uVar4,lVar6,&local_160,lVar2 != 0,0,0xffffffff,0xffffffff,0);
    if (lVar3 != 0) {
      memcpy(auStack_d0,&local_140,0x48);
      lVar2 = DAT_091aed20;
      lVar6 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          lVar6 = lVar6 + (long)(int)uVar1 * 0x48;
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          memcpy((void *)(lVar6 + 0x20),auStack_d0,0x48);
          thunk_FUN_03f5d7b8(lVar6 + 0x20,0);
        }
        else {
          uVar4 = *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
          memcpy(auStack_88,auStack_d0,0x48);
          FUN_057ef254(lVar3,auStack_88,uVar4);
        }
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

