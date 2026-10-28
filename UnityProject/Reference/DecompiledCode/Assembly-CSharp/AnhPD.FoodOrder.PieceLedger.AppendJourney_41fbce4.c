// rea decompile_all
// name: AnhPD.FoodOrder.PieceLedger$$AppendJourney
// address: 0x41fbce4
// body: available
// range: 0x41fbce4-0x41fc03b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41fc028 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41fc02c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41fc038 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PieceLedger__AppendJourney(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((DAT_09516bad & 1) == 0) {
    FUN_03f5c2a4(&DAT_09193338);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_09193340);
    FUN_03f5c2a4(&DAT_091f5ab8);
    FUN_03f5c2a4(&DAT_09226220);
    FUN_03f5c2a4(&DAT_091f5ba0);
    DAT_09516bad = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  plVar1 = (long *)FUN_03f5c394(DAT_09180318,4);
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189140);
  }
  lVar2 = AnhPD_FoodOrder_PieceLedger__Tag(param_2);
  if (plVar1 == (long *)0x0) {
LAB_041fc02c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
  goto LAB_041fc030;
  if ((int)plVar1[3] == 0) goto LAB_041fc028;
  plVar1[4] = lVar2;
  thunk_FUN_03f5d7b8(plVar1 + 4,lVar2);
  if (param_2 == 0) goto LAB_041fc02c;
  local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(param_2 + 0x30));
  lVar2 = FUN_03f5c42c(DAT_09535450,&local_80);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_041fc030:
    uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,0);
  }
  if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
    plVar1[5] = lVar2;
    thunk_FUN_03f5d7b8(plVar1 + 5,lVar2);
    local_6c = *(undefined4 *)(param_2 + 0x20);
    lVar2 = FUN_03f5c42c(DAT_09193340,&local_6c);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_041fc030;
    if (2 < *(uint *)(plVar1 + 3)) {
      plVar1[6] = lVar2;
      thunk_FUN_03f5d7b8(plVar1 + 6,lVar2);
      lVar2 = *(long *)(param_2 + 0x28);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_041fc030;
      if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
        plVar1[7] = lVar2;
        thunk_FUN_03f5d7b8(plVar1 + 7,lVar2);
        uVar4 = System_String__Format(DAT_09226220,plVar1,0);
        if (param_1 != 0) {
          System_Text_StringBuilder__AppendLine(param_1,uVar4,0);
          if (*(long *)(param_2 + 0x58) != 0) {
            FUN_057e185c(&local_68,*(long *)(param_2 + 0x58),DAT_091b05a8);
            local_80 = 0;
            puStack_78 = &local_68;
            while (uVar5 = FUN_071bd28c(&local_68,DAT_091a45a0), (uVar5 & 1) != 0) {
              uVar4 = System_String__Concat(DAT_091f5ab8,local_58,0);
              System_Text_StringBuilder__AppendLine(param_1,uVar4,0);
            }
            FUN_071bd288(&local_68,DAT_091a4598);
            local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(param_2 + 0x50));
            uVar4 = FUN_03f5c42c(DAT_09535450,&local_80);
            local_6c = *(undefined4 *)(param_2 + 0x40);
            uVar6 = FUN_03f5c42c(DAT_09193338,&local_6c);
            uVar4 = System_String__Format
                              (DAT_091f5ba0,uVar4,uVar6,*(undefined8 *)(param_2 + 0x48),0);
            System_Text_StringBuilder__AppendLine(param_1,uVar4,0);
            return;
          }
        }
        goto LAB_041fc02c;
      }
    }
  }
LAB_041fc028:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

