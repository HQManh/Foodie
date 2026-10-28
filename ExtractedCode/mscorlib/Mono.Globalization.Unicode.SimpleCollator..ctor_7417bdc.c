// rea decompile_all
// name: Mono.Globalization.Unicode.SimpleCollator$$.ctor
// address: 0x7417bdc
// body: available
// range: 0x7417bdc-0x7417f1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7417d08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7417f18 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Globalization_Unicode_SimpleCollator___ctor(long param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if ((DAT_09520f58 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09187d38);
    FUN_03f5c2a4(&DAT_0918ac28);
    DAT_09520f58 = 1;
  }
  System_Object___ctor(param_1,0);
  if (param_2 != (long *)0x0) {
    uVar3 = (**(code **)(*param_2 + 0x198))(param_2,*(undefined8 *)(*param_2 + 0x1a0));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    uVar5 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    uVar5 = thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar5);
    Mono_Globalization_Unicode_SimpleCollator__SetCJKTable
              (uVar5,param_2,param_1 + 0x18,param_1 + 0x38,param_1 + 0x40,param_1 + 0x50,
               param_1 + 0x48);
    plVar7 = param_2;
    do {
      iVar4 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
      if (iVar4 == 0x7f) {
        if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = Mono_Globalization_Unicode_MSCompatUnicodeTable__GetTailoringInfo(0x7f);
        if (lVar6 != 0) {
LAB_07417d34:
          iVar4 = *(int *)(DAT_09187d38 + 0xe4);
          *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(lVar6 + 0x1c);
          if (iVar4 == 0) {
            FUN_03f5c424();
          }
          Mono_Globalization_Unicode_MSCompatUnicodeTable__BuildTailoringTables
                    (param_2,lVar6,param_1 + 0x20,param_1 + 0x28);
          lVar6 = FUN_03f5c394(DAT_0917fc88,0x60);
          plVar7 = (long *)(param_1 + 0x30);
          *plVar7 = lVar6;
          thunk_FUN_03f5d7b8(plVar7,lVar6);
          lVar6 = *(long *)(param_1 + 0x20);
          if (lVar6 != 0) {
            uVar9 = *(uint *)(lVar6 + 0x18);
            if ((int)uVar9 < 1) goto LAB_07417e28;
            uVar8 = 0;
            goto LAB_07417d9c;
          }
        }
        break;
      }
      uVar3 = (**(code **)(*plVar7 + 0x198))(plVar7,*(undefined8 *)(*plVar7 + 0x1a0));
      if (*(int *)(DAT_09187d38 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187d38);
      }
      lVar6 = Mono_Globalization_Unicode_MSCompatUnicodeTable__GetTailoringInfo(uVar3);
      if (lVar6 != 0) goto LAB_07417d34;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
    } while (plVar7 != (long *)0x0);
  }
LAB_07417d08:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    lVar10 = *(long *)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0)) goto LAB_07417d08;
    uVar9 = *(uint *)(lVar10 + 0x18);
    if (1 < (int)uVar9) {
      lVar11 = 0;
      do {
        if (uVar9 <= (uint)lVar11) goto LAB_07417f18;
        lVar12 = *plVar7;
        if (lVar12 == 0) goto LAB_07417d08;
        uVar1 = *(ushort *)(lVar10 + 0x20 + lVar11 * 2);
        uVar2 = uVar1 >> 3;
        if (*(uint *)(lVar12 + 0x18) <= (uint)uVar2) goto LAB_07417f18;
        lVar12 = lVar12 + (ulong)uVar2;
        lVar11 = lVar11 + 1;
        *(byte *)(lVar12 + 0x20) = *(byte *)(lVar12 + 0x20) | (byte)(1 << ((ulong)uVar1 & 7));
        uVar9 = *(uint *)(lVar10 + 0x18);
      } while ((int)lVar11 < (int)uVar9);
    }
    uVar9 = *(uint *)(lVar6 + 0x18);
    uVar8 = uVar8 + 1;
    if ((int)uVar9 <= (int)uVar8) break;
LAB_07417d9c:
    if (uVar9 <= uVar8) goto LAB_07417f18;
  }
LAB_07417e28:
  if (*(int *)(param_1 + 0x58) != 0x7f) {
    if (*(int *)(DAT_0918ac28 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((**(long **)(DAT_0918ac28 + 0xb8) == 0) ||
       (lVar6 = *(long *)(**(long **)(DAT_0918ac28 + 0xb8) + 0x20), lVar6 == 0)) goto LAB_07417d08;
    uVar9 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar9) {
      uVar8 = 0;
      do {
        if (uVar9 <= uVar8) {
LAB_07417f18:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar10 = *(long *)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
        if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x18), lVar10 == 0)) goto LAB_07417d08;
        uVar9 = *(uint *)(lVar10 + 0x18);
        if (1 < (int)uVar9) {
          lVar11 = 0;
          do {
            if (uVar9 <= (uint)lVar11) goto LAB_07417f18;
            lVar12 = *plVar7;
            if (lVar12 == 0) goto LAB_07417d08;
            uVar1 = *(ushort *)(lVar10 + 0x20 + lVar11 * 2);
            uVar2 = uVar1 >> 3;
            if (*(uint *)(lVar12 + 0x18) <= (uint)uVar2) goto LAB_07417f18;
            lVar12 = lVar12 + (ulong)uVar2;
            lVar11 = lVar11 + 1;
            *(byte *)(lVar12 + 0x20) = *(byte *)(lVar12 + 0x20) | (byte)(1 << ((ulong)uVar1 & 7));
            uVar9 = *(uint *)(lVar10 + 0x18);
          } while ((int)lVar11 < (int)uVar9);
        }
        uVar9 = *(uint *)(lVar6 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar9);
    }
  }
  return;
}

