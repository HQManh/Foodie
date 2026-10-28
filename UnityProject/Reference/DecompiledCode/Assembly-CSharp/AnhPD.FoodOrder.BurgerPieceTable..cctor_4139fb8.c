// rea decompile_all
// name: AnhPD.FoodOrder.BurgerPieceTable$$.cctor
// address: 0x4139fb8
// body: available
// range: 0x4139fb8-0x413a6b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413a6b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_BurgerPieceTable___cctor(void)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_09516388 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_091a1710);
    FUN_03f5c2a4(&DAT_0919c5a8);
    FUN_03f5c2a4(&DAT_0919c5c8);
    FUN_03f5c2a4(&DAT_0919c5c0);
    FUN_03f5c2a4(&DAT_0919c5a0);
    FUN_03f5c2a4(&DAT_091a1708);
    FUN_03f5c2a4(&DAT_09176058);
    FUN_03f5c2a4(&DAT_09177160);
    FUN_03f5c2a4(&DAT_09176050);
    FUN_03f5c2a4(&DAT_09173988);
    FUN_03f5c2a4(&DAT_09217ee8);
    FUN_03f5c2a4(&DAT_0921e698);
    FUN_03f5c2a4(&DAT_09218c68);
    FUN_03f5c2a4(&DAT_092240d0);
    FUN_03f5c2a4(&DAT_09220500);
    FUN_03f5c2a4(&DAT_09220ef8);
    FUN_03f5c2a4(&DAT_0921ad68);
    FUN_03f5c2a4(&DAT_09218c50);
    FUN_03f5c2a4(&DAT_09219f28);
    FUN_03f5c2a4(&DAT_09218be8);
    FUN_03f5c2a4(&DAT_09219f20);
    FUN_03f5c2a4(&DAT_09218be0);
    FUN_03f5c2a4(&DAT_09218660);
    DAT_09516388 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09176058);
  FUN_06f3d5d4(lVar2,DAT_0919c5c0);
  uStack_68 = DAT_09218660;
  local_70 = 0;
  thunk_FUN_03f5d7b8(&uStack_68);
  if (lVar2 != 0) {
    FUN_06f3e38c(lVar2,0,local_70,uStack_68,DAT_0919c5c8);
    uStack_78 = DAT_0921e698;
    local_80 = 0;
    thunk_FUN_03f5d7b8(&uStack_78);
    FUN_06f3e38c(lVar2,3,local_80,uStack_78,DAT_0919c5c8);
    uStack_88 = DAT_09217ee8;
    local_90 = 0;
    thunk_FUN_03f5d7b8(&uStack_88);
    FUN_06f3e38c(lVar2,1,local_90,uStack_88,DAT_0919c5c8);
    uStack_98 = DAT_09220500;
    local_a0 = 0;
    thunk_FUN_03f5d7b8(&uStack_98);
    FUN_06f3e38c(lVar2,4,local_a0,uStack_98,DAT_0919c5c8);
    uStack_a8 = DAT_092240d0;
    local_b0 = 0;
    thunk_FUN_03f5d7b8(&uStack_a8);
    FUN_06f3e38c(lVar2,2,local_b0,uStack_a8,DAT_0919c5c8);
    uStack_b8 = DAT_09218be0;
    local_c0 = 0;
    thunk_FUN_03f5d7b8(&uStack_b8);
    FUN_06f3e38c(lVar2,5,local_c0,uStack_b8,DAT_0919c5c8);
    uStack_c8 = DAT_0921ad68;
    local_d0 = 0;
    thunk_FUN_03f5d7b8(&uStack_c8);
    FUN_06f3e38c(lVar2,6,local_d0,uStack_c8,DAT_0919c5c8);
    uStack_d8 = DAT_09219f20;
    local_e0 = 5;
    thunk_FUN_03f5d7b8(&uStack_d8);
    FUN_06f3e38c(lVar2,7,local_e0,uStack_d8,DAT_0919c5c8);
    uStack_e8 = DAT_09219f28;
    local_f0 = 5;
    thunk_FUN_03f5d7b8(&uStack_e8);
    FUN_06f3e38c(lVar2,8,local_f0,uStack_e8,DAT_0919c5c8);
    uStack_f8 = 0;
    local_100 = 1;
    thunk_FUN_03f5d7b8(&uStack_f8,0);
    FUN_06f3e38c(lVar2,9,local_100,uStack_f8,DAT_0919c5c8);
    uStack_108 = 0;
    local_110 = 1;
    thunk_FUN_03f5d7b8(&uStack_108,0);
    FUN_06f3e38c(lVar2,0xc,local_110,uStack_108,DAT_0919c5c8);
    uStack_118 = 0;
    local_120 = 1;
    thunk_FUN_03f5d7b8(&uStack_118,0);
    FUN_06f3e38c(lVar2,0xb,local_120,uStack_118,DAT_0919c5c8);
    uStack_128 = 0;
    local_130 = 1;
    thunk_FUN_03f5d7b8(&uStack_128,0);
    FUN_06f3e38c(lVar2,10,local_130,uStack_128,DAT_0919c5c8);
    uStack_138 = DAT_09218c50;
    local_140 = 2;
    thunk_FUN_03f5d7b8(&uStack_138);
    FUN_06f3e38c(lVar2,0xe,local_140,uStack_138,DAT_0919c5c8);
    uStack_148 = DAT_09218c68;
    local_150 = 3;
    thunk_FUN_03f5d7b8(&uStack_148);
    FUN_06f3e38c(lVar2,0xf,local_150,uStack_148,DAT_0919c5c8);
    uStack_158 = DAT_09218be8;
    local_160 = 3;
    thunk_FUN_03f5d7b8(&uStack_158);
    FUN_06f3e38c(lVar2,0x10,local_160,uStack_158,DAT_0919c5c8);
    uStack_168 = DAT_09220ef8;
    thunk_FUN_03f5d7b8(&uStack_168);
    FUN_06f3e38c(lVar2,0xd,4,uStack_168,DAT_0919c5c8);
    **(long **)(DAT_091820c0 + 0xb8) = lVar2;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_091820c0 + 0xb8),lVar2);
    lVar2 = thunk_FUN_03f9944c(DAT_09177160);
    FUN_06f2fb54(lVar2,DAT_091a1708);
    if (lVar2 != 0) {
      FUN_06f308f8(lVar2,0,0,DAT_091a1710);
      FUN_06f308f8(lVar2,1,3,DAT_091a1710);
      FUN_06f308f8(lVar2,2,1,DAT_091a1710);
      FUN_06f308f8(lVar2,3,4,DAT_091a1710);
      FUN_06f308f8(lVar2,4,2,DAT_091a1710);
      FUN_06f308f8(lVar2,5,5,DAT_091a1710);
      FUN_06f308f8(lVar2,6,6,DAT_091a1710);
      plVar3 = (long *)(*(long *)(DAT_091820c0 + 0xb8) + 8);
      *plVar3 = lVar2;
      thunk_FUN_03f5d7b8(plVar3,lVar2);
      lVar2 = thunk_FUN_03f9944c(DAT_09176050);
      FUN_06f2c578(lVar2,DAT_0919c5a0);
      if (lVar2 != 0) {
        FUN_06f2d31c(lVar2,9,0,DAT_0919c5a8);
        FUN_06f2d31c(lVar2,0xc,1,DAT_0919c5a8);
        FUN_06f2d31c(lVar2,0xb,2,DAT_0919c5a8);
        FUN_06f2d31c(lVar2,10,3,DAT_0919c5a8);
        plVar3 = (long *)(*(long *)(DAT_091820c0 + 0xb8) + 0x18);
        *plVar3 = lVar2;
        thunk_FUN_03f5d7b8(plVar3,lVar2);
        uVar4 = DAT_09173988;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
        if (*(int *)(DAT_09535470 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09535470);
        }
        lVar2 = System_Enum__GetValues(uVar4,0);
        if (lVar2 != 0) {
          uVar1 = System_Array__get_Length(lVar2,0);
          *(undefined4 *)(*(long *)(DAT_091820c0 + 0xb8) + 0x28) = uVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

