// rea decompile_all
// name: System.TermInfoDriver$$GetKeyFromBuffer
// address: 0x7609b68
// body: available
// range: 0x7609b68-0x7609e2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7609e20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7609e24 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7609e28 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_TermInfoDriver__GetKeyFromBuffer(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [12];
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [12];
  short sVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [12];
  undefined8 local_40;
  undefined8 local_38;
  
  puVar9 = &local_60;
  if ((DAT_09522013 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182a40);
    FUN_03f5c2a4(&DAT_0918ba10);
    DAT_09522013 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x88);
  iVar4 = *(int *)(param_1 + 0x8c);
  uVar5 = 0;
  local_40 = 0;
  local_38 = 0;
  if (iVar4 <= (int)uVar1) {
    return 0;
  }
  lVar10 = *(long *)(param_1 + 0x80);
  if (lVar10 == 0) goto LAB_07609e20;
  if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_07609e24;
  sVar8 = *(short *)(lVar10 + (long)(int)uVar1 * 2 + 0x20);
  if ((param_2 & 1) == 0) {
LAB_07609d00:
    *(uint *)(param_1 + 0x88) = uVar1 + 1;
    if (iVar4 <= (int)(uVar1 + 1)) {
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    uVar6 = 0;
LAB_07609d18:
    local_50 = System_TermInfoDriver__CreateKeyInfoFromInt(uVar5,sVar8,uVar6);
  }
  else {
    if (*(long *)(param_1 + 0xf8) == 0) {
LAB_07609e20:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = System_ByteMatcher__StartsWith(*(long *)(param_1 + 0xf8),sVar8);
    if ((uVar5 & 1) == 0) {
      uVar1 = *(uint *)(param_1 + 0x88);
      iVar4 = *(int *)(param_1 + 0x8c);
      goto LAB_07609d00;
    }
    if (*(long *)(param_1 + 0xf8) == 0) goto LAB_07609e20;
    uVar5 = System_ByteMatcher__Match
                      (*(long *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x80),
                       *(int *)(param_1 + 0x88),*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88),
                       (long)&local_38 + 4);
    iVar4 = (int)uVar5;
    if (iVar4 == -1) {
      lVar10 = *(long *)(param_1 + 0x80);
      if (lVar10 == 0) goto LAB_07609e20;
      uVar2 = *(uint *)(param_1 + 0x88);
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 <= uVar2) {
LAB_07609e24:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558(uVar5);
      }
      if ((*(short *)(lVar10 + (long)(int)uVar2 * 2 + 0x20) != 0x1b) ||
         ((int)(*(int *)(param_1 + 0x8c) - uVar2) < 2)) {
        return 0;
      }
      iVar4 = uVar2 + 2;
      *(int *)(param_1 + 0x88) = iVar4;
      if (*(int *)(param_1 + 0x8c) <= iVar4) {
        iVar4 = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
      }
      if (uVar1 <= iVar4 + 1U) goto LAB_07609e24;
      sVar8 = *(short *)(lVar10 + (long)(int)(iVar4 + 1U) * 2 + 0x20);
      if (sVar8 == 0x7f) {
        local_50._8_4_ = 0;
        local_50._0_8_ = 0;
        System_ConsoleKeyInfo___ctor(local_50,8,8,0,1,0,0);
        local_60 = local_50._0_8_;
        local_58 = local_50._8_4_;
        goto LAB_07609d34;
      }
      uVar6 = 1;
      goto LAB_07609d18;
    }
    plVar11 = *(long **)(param_1 + 0xf0);
    local_50._0_4_ = iVar4;
    uVar6 = FUN_03f5c42c(DAT_0918ba10,local_50);
    if (plVar11 == (long *)0x0) goto LAB_07609e20;
    lVar10 = (**(code **)(*plVar11 + 0x308))(plVar11,uVar6,*(undefined8 *)(*plVar11 + 0x310));
    if (lVar10 == 0) {
      uVar1 = *(uint *)(param_1 + 0x88);
      iVar4 = *(int *)(param_1 + 0x8c);
      uVar5 = 0;
      goto LAB_07609d00;
    }
    plVar11 = *(long **)(param_1 + 0xf0);
    uVar6 = FUN_03f5c42c(DAT_0918ba10,local_50);
    if ((plVar11 == (long *)0x0) ||
       (plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                    (plVar11,uVar6,*(undefined8 *)(*plVar11 + 0x310)),
       plVar11 == (long *)0x0)) goto LAB_07609e20;
    if (*(long *)(*plVar11 + 0x40) != *(long *)(DAT_09182a40 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
    pauVar7 = (undefined1 (*) [12])thunk_FUN_03f99594();
    local_40 = *(undefined8 *)*pauVar7;
    auVar3 = *pauVar7;
    local_50 = *pauVar7;
    iVar4 = local_38._4_4_ + *(int *)(param_1 + 0x88);
    local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(*pauVar7 + 8));
    *(int *)(param_1 + 0x88) = iVar4;
    if (*(int *)(param_1 + 0x8c) <= iVar4) {
      *(undefined8 *)(param_1 + 0x88) = 0;
      local_50 = auVar3;
    }
  }
  puVar9 = (undefined8 *)local_50;
LAB_07609d34:
  uVar6 = FUN_03f5c42c(DAT_09182a40,puVar9);
  return uVar6;
}

