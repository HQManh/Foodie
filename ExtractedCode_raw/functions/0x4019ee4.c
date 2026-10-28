// rea decompile_all
// name: FUN_04019ee4
// address: 0x4019ee4
// body: available
// range: 0x4019ee4-0x401a027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x401a024 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04019ee4(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 *local_48;
  undefined8 **local_40;
  undefined1 **local_38;
  
  local_48 = std::__ndk1::moneypunct<char,false>::id;
  if (std::__ndk1::moneypunct<char,false>::id._0_8_ != -1) {
    local_38 = &local_48;
    local_40 = &local_38;
    std::__ndk1::__call_once
              ((ulong *)std::__ndk1::moneypunct<char,false>::id,&local_40,FUN_0402d4a0);
  }
  uVar3 = (ulong)(int)std::__ndk1::moneypunct<char,false>::id._8_4_;
  uVar8 = uVar3 - 1;
  if ((uVar8 < (ulong)(param_2[3] - param_2[2] >> 3)) &&
     (lVar5 = *(long *)(param_2[2] + uVar8 * 8), param_2 = (long *)0x0, lVar5 != 0)) {
    FUN_0404bff0(1,lVar5 + 8);
    plVar6 = (long *)(param_1 + 0x10);
    lVar2 = *plVar6;
    uVar4 = *(long *)(param_1 + 0x18) - lVar2 >> 3;
    if (uVar4 <= uVar8) {
      if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
        if (uVar3 < uVar4) {
          *(ulong *)(param_1 + 0x18) = lVar2 + uVar3 * 8;
        }
      }
      else {
        FUN_0402c39c(plVar6,uVar3 - uVar4);
        lVar2 = *plVar6;
      }
    }
    plVar7 = *(long **)(lVar2 + uVar8 * 8);
    if ((plVar7 != (long *)0x0) && (lVar2 = FUN_0404c020(0xffffffffffffffff,plVar7 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    *(long *)(*plVar6 + uVar8 * 8) = lVar5;
    return;
  }
  uVar1 = FUN_03ff9c28();
  lVar5 = FUN_0404c020(0xffffffffffffffff,param_2 + 1);
  if (lVar5 == 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar1);
}

