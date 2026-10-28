// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.GraphNodeIdMap$$Describe
// address: 0x4178a24
// body: available
// range: 0x4178a24-0x4178e2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4178e20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4178e24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4178e28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Autoplay_GraphNodeIdMap__Describe(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  
  if ((DAT_09516614 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f958);
    FUN_03f5c2a4(&DAT_0919f968);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a6738);
    FUN_03f5c2a4(&DAT_091a6740);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091a6748);
    FUN_03f5c2a4(&DAT_091a97f8);
    FUN_03f5c2a4(&DAT_091a9800);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_09213b68);
    FUN_03f5c2a4(&DAT_091f5ac0);
    FUN_03f5c2a4(&DAT_091f5be0);
    FUN_03f5c2a4(&DAT_091f5be8);
    FUN_03f5c2a4(&DAT_091f5b50);
    FUN_03f5c2a4(&DAT_091f5bd8);
    DAT_09516614 = 1;
  }
  local_70 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar1,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    local_ac = FUN_06fd810c(*(long *)(param_1 + 0x10),DAT_0919f968);
    uVar2 = FUN_03f5c42c(DAT_09535420,&local_ac);
    if (*(long *)(param_1 + 0x18) != 0) {
      local_b0 = FUN_06fd810c(*(long *)(param_1 + 0x18),DAT_0919f968);
      uVar3 = FUN_03f5c42c(DAT_09535420,&local_b0);
      uVar2 = System_String__Format(DAT_09213b68,uVar2,uVar3,0);
      if (plVar1 != (long *)0x0) {
        System_Text_StringBuilder__AppendLine(plVar1,uVar2,0);
        System_Text_StringBuilder__AppendLine(plVar1,DAT_091f5be0,0);
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_06fd8888(&local_d8,*(long *)(param_1 + 0x10),DAT_0919f958);
          local_70 = local_b8;
          puStack_88 = puStack_d0;
          local_90 = local_d8;
          local_78 = lStack_c0;
          local_80 = local_c8;
          local_d8 = 0;
          puStack_d0 = &local_90;
          while (uVar4 = FUN_072753d4(&local_90,DAT_091a6740), (uVar4 & 1) != 0) {
            if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar2 = System_String__Format(DAT_091f5b50,local_80,*(undefined8 *)(local_78 + 0x18),0);
            System_Text_StringBuilder__AppendLine(plVar1,uVar2,0);
          }
          FUN_072754f4(&local_90,DAT_091a6738);
          System_Text_StringBuilder__AppendLine(plVar1,DAT_091f5be8,0);
          if (*(long *)(param_1 + 0x18) != 0) {
            FUN_06fd8888(&local_d8,*(long *)(param_1 + 0x18),DAT_0919f958);
            local_70 = local_b8;
            puStack_88 = puStack_d0;
            local_90 = local_d8;
            local_78 = lStack_c0;
            local_80 = local_c8;
            local_d8 = 0;
            puStack_d0 = &local_90;
            while (uVar4 = FUN_072753d4(&local_90,DAT_091a6740), (uVar4 & 1) != 0) {
              if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar2 = System_String__Format
                                (DAT_091f5b50,local_80,*(undefined8 *)(local_78 + 0x18),0);
              System_Text_StringBuilder__AppendLine(plVar1,uVar2,0);
            }
            FUN_072754f4(&local_90,DAT_091a6738);
            if (*(long *)(param_1 + 0x20) != 0) {
              if (0 < *(int *)(*(long *)(param_1 + 0x20) + 0x18)) {
                System_Text_StringBuilder__AppendLine(plVar1,DAT_091f5bd8,0);
                if (*(long *)(param_1 + 0x20) == 0) goto LAB_04178e28;
                FUN_057e185c(&local_a8,*(long *)(param_1 + 0x20),DAT_091b05a8);
                local_d8 = 0;
                puStack_d0 = &local_a8;
                while (uVar4 = FUN_071bd28c(&local_a8,DAT_091a45a0), (uVar4 & 1) != 0) {
                  uVar2 = System_String__Concat(DAT_091f5ac0,local_98,0);
                  System_Text_StringBuilder__AppendLine(plVar1,uVar2,0);
                }
                FUN_071bd288(&local_a8,DAT_091a4598);
              }
              (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
              return;
            }
          }
        }
      }
    }
  }
LAB_04178e28:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

