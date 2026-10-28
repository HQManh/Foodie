// rea decompile_all
// name: Datpt.ObserverPattern.EventsGroup$$StopListening
// address: 0x419fde8
// body: available
// range: 0x419fde8-0x419ff33 inclusive
// range: 0x419ff70-0x41a00b7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a00b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41a00b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_ObserverPattern_EventsGroup__StopListening(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_09516835 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a5240);
    FUN_03f5c2a4(&DAT_091a5248);
    FUN_03f5c2a4(&DAT_091a5250);
    FUN_03f5c2a4(&DAT_09184238);
    FUN_03f5c2a4(&DAT_091b2a58);
    FUN_03f5c2a4(&DAT_091b2a60);
    FUN_03f5c2a4(&DAT_091b2a50);
    FUN_03f5c2a4(&DAT_0917d368);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09516835 = 1;
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uVar5 = System_String__op_Equality(param_2,DAT_091f5700,0);
  if ((uVar5 & 1) == 0) {
    lVar6 = thunk_FUN_03f9944c(DAT_0917d368);
    FUN_05905118(lVar6,DAT_091b2a50);
    plVar9 = (long *)(param_1 + 0x10);
    if (*plVar9 == 0) goto LAB_041a00b4;
    FUN_05906608(&local_90,*plVar9,DAT_091b2a60);
    local_70 = local_90;
    local_90 = 0;
    uStack_68 = puStack_88;
    uStack_58 = uStack_78;
    local_60 = uStack_80;
    puStack_88 = &local_70;
LAB_0419ffc0:
    uVar5 = FUN_072230a4(&local_70,DAT_091a5248);
    uVar4 = uStack_58;
    uVar3 = local_60;
    if ((uVar5 & 1) != 0) {
      uVar5 = System_String__op_Inequality(local_60,param_2,0);
      lVar2 = DAT_091b2a58;
      if ((uVar5 & 1) != 0) {
        if (lVar6 != 0) {
          lVar8 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              puVar7 = (undefined8 *)(lVar8 + 0x20);
              *puVar7 = uVar3;
              *(undefined8 *)(lVar8 + 0x28) = uVar4;
              thunk_FUN_03f5d7b8(puVar7,0);
            }
            else {
              FUN_059059c4(lVar6,uVar3,uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_0419ffc0;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(DAT_09184238 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Datpt_ObserverPattern_EventManager__StopListening(uVar3,uVar4);
      goto LAB_0419ffc0;
    }
    FUN_072230a0(&local_70,DAT_091a5240);
    *plVar9 = lVar6;
    thunk_FUN_03f5d7b8(plVar9,lVar6);
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_041a00b4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_05906608(&local_90,*(long *)(param_1 + 0x10),DAT_091b2a60);
    local_70 = local_90;
    local_90 = 0;
    uStack_68 = puStack_88;
    uStack_58 = uStack_78;
    local_60 = uStack_80;
    puStack_88 = &local_70;
    while (uVar5 = FUN_072230a4(&local_70,DAT_091a5248), uVar4 = uStack_58, uVar3 = local_60,
          (uVar5 & 1) != 0) {
      if (*(int *)(DAT_09184238 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Datpt_ObserverPattern_EventManager__StopListening(uVar3,uVar4);
    }
    FUN_072230a0(&local_70,DAT_091a5240);
  }
  return;
}

