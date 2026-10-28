// rea decompile_all
// name: _GAME.DreamyPass.DreamyPassDbModel.SaveGameModel$$.ctor
// address: 0x78193f0
// body: available
// range: 0x78193f0-0x78196f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x78196ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x78196f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x78196f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_DreamyPassDbModel_SaveGameModel___ctor(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_88;
  undefined8 *puStack_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  ulong local_60;
  
  if ((DAT_095232b1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a22f0);
    FUN_03f5c2a4(&DAT_091a22f8);
    FUN_03f5c2a4(&DAT_091a2300);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091ab3f8);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_0917c520);
    DAT_095232b1 = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar2,DAT_091adc70);
  plVar8 = (long *)(param_1 + 0x30);
  *plVar8 = lVar2;
  thunk_FUN_03f5d7b8(plVar8,lVar2);
  lVar2 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar2,DAT_091adc70);
  plVar7 = (long *)(param_1 + 0x38);
  *plVar7 = lVar2;
  thunk_FUN_03f5d7b8(plVar7,lVar2);
  System_Object___ctor(param_1,0);
  uVar3 = DAT_0917c520;
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x10) = (uint)*(byte *)(param_2 + 0x10);
    *(uint *)(param_1 + 0x14) = (uint)*(byte *)(param_2 + 0x11);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(uint *)(param_1 + 0x20) = (uint)*(byte *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    uVar3 = thunk_FUN_03f9944c(uVar3);
    FUN_05796918(uVar3,DAT_091adc70);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    thunk_FUN_03f5d7b8(plVar8,uVar3);
    if (*(long *)(param_2 + 0x30) != 0) {
      FUN_0571cce0(&local_88,*(long *)(param_2 + 0x30),DAT_091ab3f8);
      local_60 = local_78;
      puStack_68 = puStack_80;
      local_70 = local_88;
      local_88 = 0;
      puStack_80 = &local_70;
      while (uVar4 = FUN_07192130(&local_70,DAT_091a22f8), lVar2 = DAT_091adc88, (uVar4 & 1) != 0) {
        lVar5 = *plVar8;
        if (lVar5 == 0) {
LAB_078196ec:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *(long *)(lVar5 + 0x10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_078196ec;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(uint *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = (uint)(byte)local_60;
        }
        else {
          FUN_057971a8(lVar5,local_60 & 0xff,
                       *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_0719212c(&local_70,DAT_091a22f0);
      lVar2 = thunk_FUN_03f9944c(DAT_0917c520);
      FUN_05796918(lVar2,DAT_091adc70);
      *plVar7 = lVar2;
      thunk_FUN_03f5d7b8(plVar7,lVar2);
      if (*(long *)(param_2 + 0x38) != 0) {
        FUN_0571cce0(&local_88,*(long *)(param_2 + 0x38),DAT_091ab3f8);
        local_60 = local_78;
        puStack_68 = puStack_80;
        local_70 = local_88;
        local_88 = 0;
        puStack_80 = &local_70;
        while( true ) {
          uVar4 = FUN_07192130(&local_70,DAT_091a22f8);
          lVar2 = DAT_091adc88;
          if ((uVar4 & 1) == 0) {
            FUN_0719212c(&local_70,DAT_091a22f0);
            return;
          }
          lVar5 = *plVar7;
          if (lVar5 == 0) break;
          lVar6 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar6 == 0) break;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(uint *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = (uint)(byte)local_60;
          }
          else {
            FUN_057971a8(lVar5,local_60 & 0xff,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
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

