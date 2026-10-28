// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<DoReadAsDateTimeAsync>d__45$$MoveNext
// address: 0x76589a4
// body: available
// range: 0x76589a4-0x7658be7 inclusive
// range: 0x7658ce4-0x7658ce7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7658bb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7658bcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7658be4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7658ce4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<DoReadAsDateTimeAsync>d__45__MoveNext(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_68;
  undefined1 local_60 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((DAT_095223cb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197da0);
    FUN_03f5c2a4(&DAT_09197dc0);
    FUN_03f5c2a4(&DAT_09175108);
    FUN_03f5c2a4(&DAT_0919b950);
    FUN_03f5c2a4(&DAT_0919ba68);
    FUN_03f5c2a4(&DAT_0919ba70);
    FUN_03f5c2a4(&DAT_0917dc38);
    FUN_03f5c2a4(&DAT_091bcca8);
    DAT_095223cb = 1;
  }
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  auVar3 = ZEXT816(0);
  local_68 = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_07658b0c:
    plVar6 = (long *)FUN_06dab358(local_60,DAT_0919ba68);
    if ((plVar6 != (long *)0x0) && (*plVar6 != *(long *)(DAT_0917dc38 + 0x40))) {
      auVar3 = local_60;
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar6,*(long *)(DAT_0917dc38 + 0x40));
      }
      goto LAB_07658ce4;
    }
    thunk_FUN_03f9959c(plVar6,DAT_0917dc38,&local_80);
    iVar1 = *(int *)(DAT_09175108 + 0xe4);
    *param_1 = -2;
    if (iVar1 == 0) {
      FUN_03f5c424();
    }
    FUN_06510f44(param_1 + 2,local_80,uStack_78,DAT_09197dc0);
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_07658ce4;
    }
    lVar4 = Newtonsoft_Json_JsonTextReader__ReadStringValueAsync
                      (*(long *)(param_1 + 8),6,*(undefined8 *)(param_1 + 10),0);
    auVar3._8_8_ = local_60._8_8_;
    auVar3._0_8_ = local_60._0_8_;
    if (lVar4 == 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_07658ce4;
    }
    local_60 = FUN_062ee72c(lVar4,0,DAT_091bcca8);
    uVar5 = FUN_06dab310(local_60,DAT_0919ba70);
    if ((uVar5 & 1) != 0) goto LAB_07658b0c;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
    thunk_FUN_03f5d7b8(param_1 + 0xc,0);
    if (*(int *)(DAT_09175108 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_045cf680(param_1 + 2,local_60,param_1,DAT_09197da0);
  }
  auVar3 = local_60;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_07658ce4:
  local_60 = auVar3;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

