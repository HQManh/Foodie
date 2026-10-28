// rea decompile_all
// name: AnhPD.FoodOrder.CafePieceTable$$.cctor
// address: 0x41449a8
// body: available
// range: 0x41449a8-0x4144e4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4144e48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4144e4c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CafePieceTable___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_095163fa & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc90);
    FUN_03f5c2a4(&DAT_09182240);
    FUN_03f5c2a4(&DAT_0917fcd0);
    FUN_03f5c2a4(&DAT_091a7f80);
    FUN_03f5c2a4(&DAT_091a7f70);
    FUN_03f5c2a4(&DAT_091a7f78);
    FUN_03f5c2a4(&DAT_09179d60);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_091f3718);
    FUN_03f5c2a4(&DAT_091f3768);
    FUN_03f5c2a4(&DAT_091f37d0);
    FUN_03f5c2a4(&DAT_091f37e0);
    DAT_095163fa = 1;
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AnhPD_FoodOrder_PieceSet__One(&local_58,7,0);
  puVar4 = *(undefined8 **)(DAT_09182240 + 0xb8);
  puVar4[1] = uStack_50;
  *puVar4 = local_58;
  puVar4[2] = local_48;
  uVar1 = FUN_03f5c394(DAT_0917fcd0,9);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3768,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182240 + 0xb8) + 0x18);
  *puVar4 = uVar1;
  thunk_FUN_03f5d7b8(puVar4,uVar1);
  uVar6 = *(undefined8 *)(*(long *)(DAT_09182240 + 0xb8) + 0x18);
  uVar1 = thunk_FUN_03f9944c(DAT_09179d60);
  FUN_053dc07c(uVar1,uVar6,DAT_091a7f78);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182240 + 0xb8) + 0x20);
  *puVar4 = uVar1;
  thunk_FUN_03f5d7b8(puVar4,uVar1);
  AnhPD_FoodOrder_PieceSet__One(&local_70,0xc,0);
  uVar1 = DAT_0917fcd0;
  lVar5 = *(long *)(DAT_09182240 + 0xb8);
  *(undefined8 *)(lVar5 + 0x30) = uStack_68;
  *(undefined8 *)(lVar5 + 0x28) = local_70;
  *(undefined8 *)(lVar5 + 0x38) = local_60;
  uVar1 = FUN_03f5c394(uVar1,7);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f37e0,0);
  puVar4 = (undefined8 *)(*(long *)(DAT_09182240 + 0xb8) + 0x40);
  *puVar4 = uVar1;
  thunk_FUN_03f5d7b8(puVar4,uVar1);
  lVar5 = FUN_03f5c394(DAT_0917fcd0,3);
  if (lVar5 != 0) {
    if ((*(uint *)(lVar5 + 0x18) < 2) ||
       (*(undefined4 *)(lVar5 + 0x24) = 1, *(uint *)(lVar5 + 0x18) == 2)) {
LAB_04144e4c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar2 = *(long *)(DAT_09182240 + 0xb8);
    *(undefined4 *)(lVar5 + 0x28) = 2;
    *(long *)(lVar2 + 0x48) = lVar5;
    thunk_FUN_03f5d7b8();
    lVar5 = thunk_FUN_03f9944c(DAT_09179d60);
    FUN_053dbf8c(lVar5,DAT_091a7f70);
    if (lVar5 != 0) {
      FUN_053dd1d4(lVar5,3,DAT_091a7f80);
      FUN_053dd1d4(lVar5,4,DAT_091a7f80);
      FUN_053dd1d4(lVar5,5,DAT_091a7f80);
      FUN_053dd1d4(lVar5,6,DAT_091a7f80);
      plVar3 = (long *)(*(long *)(DAT_09182240 + 0xb8) + 0x50);
      *plVar3 = lVar5;
      thunk_FUN_03f5d7b8(plVar3,lVar5);
      uVar1 = FUN_03f5c394(DAT_0917fcd0,9);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f37d0,0);
      puVar4 = (undefined8 *)(*(long *)(DAT_09182240 + 0xb8) + 0x58);
      *puVar4 = uVar1;
      thunk_FUN_03f5d7b8(puVar4,uVar1);
      AnhPD_FoodOrder_PieceSet__One(&local_88,8,0);
      uVar1 = DAT_0917fcd0;
      lVar5 = *(long *)(DAT_09182240 + 0xb8);
      *(undefined8 *)(lVar5 + 0x68) = uStack_80;
      *(undefined8 *)(lVar5 + 0x60) = local_88;
      *(undefined8 *)(lVar5 + 0x70) = local_78;
      lVar2 = FUN_03f5c394(uVar1,1);
      lVar5 = DAT_09182240;
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x18) == 0) goto LAB_04144e4c;
        *(undefined4 *)(lVar2 + 0x20) = 10;
        *(long *)(*(long *)(lVar5 + 0xb8) + 0x78) = lVar2;
        thunk_FUN_03f5d7b8();
        lVar5 = thunk_FUN_03f9944c(DAT_09179d60);
        FUN_053dbf8c(lVar5,DAT_091a7f70);
        if (lVar5 != 0) {
          FUN_053dd1d4(lVar5,0x10,DAT_091a7f80);
          FUN_053dd1d4(lVar5,0x11,DAT_091a7f80);
          FUN_053dd1d4(lVar5,0x12,DAT_091a7f80);
          FUN_053dd1d4(lVar5,0x13,DAT_091a7f80);
          plVar3 = (long *)(*(long *)(DAT_09182240 + 0xb8) + 0x80);
          *plVar3 = lVar5;
          thunk_FUN_03f5d7b8(plVar3,lVar5);
          lVar5 = thunk_FUN_03f9944c(DAT_09179d60);
          FUN_053dbf8c(lVar5,DAT_091a7f70);
          if (lVar5 != 0) {
            FUN_053dd1d4(lVar5,0xd,DAT_091a7f80);
            FUN_053dd1d4(lVar5,0xe,DAT_091a7f80);
            plVar3 = (long *)(*(long *)(DAT_09182240 + 0xb8) + 0x88);
            *plVar3 = lVar5;
            thunk_FUN_03f5d7b8(plVar3,lVar5);
            uVar1 = thunk_FUN_03f9944c(DAT_0917c520);
            FUN_05796918(uVar1,DAT_091adc70);
            puVar4 = (undefined8 *)(*(long *)(DAT_09182240 + 0xb8) + 0x90);
            *puVar4 = uVar1;
            thunk_FUN_03f5d7b8(puVar4,uVar1);
            uVar1 = FUN_03f5c394(DAT_0917fc90,4);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar1,DAT_091f3718,0);
            puVar4 = (undefined8 *)(*(long *)(DAT_09182240 + 0xb8) + 0x98);
            *puVar4 = uVar1;
            thunk_FUN_03f5d7b8(puVar4,uVar1);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

