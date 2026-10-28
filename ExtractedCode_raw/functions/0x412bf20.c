// rea decompile_all
// name: AnhPD.FoodOrder.DebugReportCodec$$TryDecode
// address: 0x412bf20
// body: available
// range: 0x412bf20-0x412c307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x412c2ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x412c2f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x412c2f4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x412c2f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x412c2fc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x412c304 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0412c280) */
/* WARNING: Removing unreachable block (ram,0x0412c294) */
/* WARNING: Removing unreachable block (ram,0x0412c300) */
/* WARNING: Removing unreachable block (ram,0x0412c2f4) */
/* WARNING: Removing unreachable block (ram,0x0412c2fc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 AnhPD_FoodOrder_DebugReportCodec__TryDecode(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  int *piVar8;
  
  if ((DAT_09516308 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09183980);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09188030);
    FUN_03f5c2a4(&DAT_0918b320);
    FUN_03f5c2a4(&DAT_0920a0e8);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09516308 = 1;
  }
  lVar1 = DAT_091f5700;
  if (param_1 != 0) {
    lVar1 = param_1;
  }
  *param_2 = lVar1;
  thunk_FUN_03f5d7b8(param_2);
  if ((*param_2 == 0) || (lVar1 = System_String__Trim(*param_2,0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = System_String__StartsWith(lVar1,DAT_0920a0e8,4,0);
  if ((uVar2 & 1) != 0) {
    if (DAT_0920a0e8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    System_String__Substring(lVar1,*(undefined4 *)(DAT_0920a0e8 + 0x10),0);
    uVar3 = AnhPD_FoodOrder_DebugReportCodec__StripWhitespace();
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Convert__FromBase64String(uVar3,0);
    plVar4 = (long *)thunk_FUN_03f9944c(DAT_09188030);
    System_IO_MemoryStream___ctor(plVar4,uVar3,0);
    plVar5 = (long *)thunk_FUN_03f9944c(DAT_09183980);
    System_IO_Compression_DeflateStream___ctor(plVar5,plVar4,0,0);
    uVar3 = System_Text_Encoding__get_UTF8(0);
    plVar6 = (long *)thunk_FUN_03f9944c(DAT_0918b320);
    System_IO_StreamReader___ctor(plVar6,plVar5,uVar3,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = (**(code **)(*plVar6 + 0x208))(plVar6,*(undefined8 *)(*plVar6 + 0x210));
    *param_2 = lVar1;
    thunk_FUN_03f5d7b8(param_2);
    if (plVar6 != (long *)0x0) {
      lVar1 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185a58) {
            puVar7 = (undefined8 *)(lVar1 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0412c17c;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_0412c17c:
      (*(code *)*puVar7)(plVar6,puVar7[1]);
    }
    if (plVar5 != (long *)0x0) {
      lVar1 = *plVar5;
      uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185a58) {
            puVar7 = (undefined8 *)(lVar1 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0412c1ec;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_0412c1ec:
      (*(code *)*puVar7)(plVar5,puVar7[1]);
    }
    if (plVar4 != (long *)0x0) {
      lVar1 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185a58) {
            puVar7 = (undefined8 *)(lVar1 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0412c268;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_0412c268:
      (*(code *)*puVar7)(plVar4,puVar7[1]);
    }
  }
  return 1;
}

