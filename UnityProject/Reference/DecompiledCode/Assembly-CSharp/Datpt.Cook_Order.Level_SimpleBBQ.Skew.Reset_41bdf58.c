// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.Skew$$Reset
// address: 0x41bdf58
// body: available
// range: 0x41bdf58-0x41be1bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41be1a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41be1ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41be1b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41be1bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_Skew__Reset(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_78;
  undefined8 *puStack_70;
  long *local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  long *local_50;
  
  if ((DAT_09516980 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835f0);
    FUN_03f5c2a4(&DAT_091a3608);
    FUN_03f5c2a4(&DAT_091a3610);
    FUN_03f5c2a4(&DAT_091a3618);
    FUN_03f5c2a4(&DAT_091ac7e8);
    FUN_03f5c2a4(&DAT_091adf58);
    FUN_03f5c2a4(&DAT_091adf60);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091fe9e0);
    DAT_09516980 = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = (long *)0x0;
  if (*(long *)(param_1 + 0x118) != 0) {
    FUN_057e185c(&local_78,*(long *)(param_1 + 0x118),DAT_091adf60);
    local_50 = local_68;
    puStack_58 = puStack_70;
    local_60 = local_78;
    local_78 = 0;
    puStack_70 = &local_60;
    while (uVar2 = FUN_071bd28c(&local_60,DAT_091a3610), (uVar2 & 1) != 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*local_50 + 0x188))(local_50,*(undefined8 *)(*local_50 + 400));
    }
    FUN_071bd288(&local_60,DAT_091a3608);
    lVar3 = Datpt_Cook_Order_ItemMovingBase__get_TF(param_1,0);
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    if (lVar3 != 0) {
      lVar6 = *(long *)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Transform__set_localScale
                (*(undefined4 *)(lVar6 + 0xc),*(undefined4 *)(lVar6 + 0x10),
                 *(undefined4 *)(lVar6 + 0x14),lVar3,0);
      Datpt_Cook_Order_Level_SimpleBBQ_Skew__ResetSkewItem(param_1);
      lVar3 = *(long *)(param_1 + 0x118);
      if (lVar3 != 0) {
        iVar1 = *(int *)(lVar3 + 0x18);
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
        }
        uVar5 = DAT_09180318;
        lVar3 = *(long *)(param_1 + 0x120);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x18) = 0;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          plVar4 = (long *)FUN_03f5c394(uVar5,1);
          if (plVar4 != (long *)0x0) {
            if ((DAT_091fe9e0 != 0) &&
               (lVar3 = thunk_FUN_03f99350(DAT_091fe9e0,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0
               )) {
              uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar5,0);
            }
            if ((int)plVar4[3] != 0) {
              plVar4[4] = DAT_091fe9e0;
              thunk_FUN_03f5d7b8();
              if (*(int *)(DAT_091835f0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              Datpt_DebugCustom__LogColor(plVar4,0);
              *(undefined4 *)(param_1 + 0x100) = 0;
              *(undefined2 *)(param_1 + 0x110) = 0;
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

