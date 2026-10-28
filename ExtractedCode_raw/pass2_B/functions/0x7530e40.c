// rea decompile_all
// name: System.Globalization.GregorianCalendar$$GetDaysInMonth
// address: 0x7530e40
// body: available
// range: 0x7530e40-0x75310cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7530f64 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75310c8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75310cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Globalization_GregorianCalendar__GetDaysInMonth
              (undefined8 param_1,ulong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((DAT_0952185f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184eb0);
    DAT_0952185f = 1;
  }
  if (param_4 < 2) {
    uVar8 = (uint)param_2;
    if (uVar8 - 1 < 9999) {
      uVar1 = param_3 - 1;
      if (uVar1 < 0xc) {
        if (((param_2 & 3) == 0) &&
           ((0x28f5c28 < ((uVar8 & 0xffff) * -0x3d70a3d7 >> 2 | uVar8 * 0x40000000) ||
            ((uVar8 & 0xffff) + (int)((param_2 & 0xffff) / 400) * -400 == 0)))) {
          if (*(int *)(DAT_09184eb0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar6 = (long *)(*(long *)(DAT_09184eb0 + 0xb8) + 8);
        }
        else {
          if (*(int *)(DAT_09184eb0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar6 = *(long **)(DAT_09184eb0 + 0xb8);
        }
        lVar7 = *plVar6;
        if (lVar7 != 0) {
          if ((param_3 < *(uint *)(lVar7 + 0x18)) && (uVar1 < *(uint *)(lVar7 + 0x18))) {
            return *(int *)(lVar7 + 0x20 + (ulong)param_3 * 4) -
                   *(int *)(lVar7 + 0x20 + (ulong)uVar1 * 4);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = thunk_FUN_03fc39d4(&DAT_09208138);
      uVar2 = System_Environment__GetResourceString(uVar2,0);
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar3 = thunk_FUN_03f9944c();
      puVar4 = &DAT_0921f8e8;
    }
    else {
      uVar2 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar2 = FUN_03f5c394(uVar2,2);
      local_24 = 1;
      uVar3 = FUN_03f5c42c(DAT_09535420,&local_24);
      FUN_039b1d98(uVar2);
      FUN_039b0da0(uVar2,uVar3);
      FUN_039af17c(uVar2,0,uVar3);
      local_28 = 9999;
      uVar3 = FUN_03f5c42c(DAT_09535420,&local_28);
      FUN_039b0da0(uVar2,uVar3);
      FUN_039af17c(uVar2,1,uVar3);
      uVar3 = thunk_FUN_03fc39d4(&DAT_09212b18);
      uVar2 = System_Environment__GetResourceString(uVar3,uVar2,0);
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar3 = thunk_FUN_03f9944c();
      puVar4 = (undefined8 *)&DAT_09225cc0;
    }
  }
  else {
    uVar2 = thunk_FUN_03fc39d4(&DAT_09201730);
    uVar2 = System_Environment__GetResourceString(uVar2,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar3 = thunk_FUN_03f9944c();
    puVar4 = (undefined8 *)&DAT_0921b0b8;
  }
  uVar5 = thunk_FUN_03fc39d4(puVar4);
  System_ArgumentOutOfRangeException___ctor(uVar3,uVar5,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091ce260);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

