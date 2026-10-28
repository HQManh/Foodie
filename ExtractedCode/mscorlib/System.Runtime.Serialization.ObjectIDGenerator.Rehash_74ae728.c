// rea decompile_all
// name: System.Runtime.Serialization.ObjectIDGenerator$$Rehash
// address: 0x74ae728
// body: available
// range: 0x74ae728-0x74aea13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ae9b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ae9b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ae9c4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74aea10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_ObjectIDGenerator__Rehash(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 local_64 [4];
  
  if ((DAT_0952140a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801c0);
    FUN_03f5c2a4(&DAT_09188b08);
    FUN_03f5c2a4(&DAT_09180318);
    DAT_0952140a = 1;
  }
  uVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  local_64[0] = 0;
  lVar3 = DAT_09188b08;
  while( true ) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar3 = DAT_09188b08;
    }
    lVar6 = **(long **)(lVar3 + 0xb8);
    if (lVar6 == 0) goto LAB_074ae9b8;
    if (*(int *)(lVar6 + 0x18) <= (int)uVar2) break;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar6 = **(long **)(DAT_09188b08 + 0xb8);
      lVar3 = DAT_09188b08;
      if (lVar6 == 0) goto LAB_074ae9b8;
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar2) goto LAB_074ae9b4;
    if (iVar1 < *(int *)(lVar6 + (long)(int)uVar2 * 4 + 0x20)) break;
    uVar2 = uVar2 + 1;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar3 = DAT_09188b08;
  }
  lVar6 = **(long **)(lVar3 + 0xb8);
  if (lVar6 != 0) {
    if (*(uint *)(lVar6 + 0x18) == uVar2) {
      uVar4 = thunk_FUN_03fc39d4(&DAT_0920f710);
      uVar4 = System_Environment__GetResourceString(uVar4,0);
      thunk_FUN_03fc39d4(&DAT_0918a948);
      uVar5 = thunk_FUN_03f9944c();
      System_Runtime_Serialization_SerializationException___ctor(uVar5,uVar4);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091d4f08);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar4);
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar6 = **(long **)(DAT_09188b08 + 0xb8);
      if (lVar6 == 0) goto LAB_074ae9b8;
    }
    uVar4 = DAT_091801c0;
    if (*(uint *)(lVar6 + 0x18) <= uVar2) {
LAB_074ae9b4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    iVar1 = *(int *)(lVar6 + (long)(int)uVar2 * 4 + 0x20);
    *(int *)(param_1 + 0x14) = iVar1;
    lVar3 = FUN_03f5c394(uVar4,iVar1 << 2);
    lVar6 = FUN_03f5c394(DAT_09180318,*(int *)(param_1 + 0x14) << 2);
    plVar9 = (long *)(param_1 + 0x20);
    lVar11 = *plVar9;
    plVar8 = (long *)(param_1 + 0x18);
    lVar12 = *plVar8;
    *plVar8 = lVar3;
    thunk_FUN_03f5d7b8(plVar8,lVar3);
    *plVar9 = lVar6;
    thunk_FUN_03f5d7b8(plVar9,lVar6);
    if (lVar11 != 0) {
      if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
        uVar10 = 0;
        uVar7 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar10) goto LAB_074ae9b4;
          lVar3 = *(long *)(lVar11 + 0x20 + uVar10 * 8);
          if (lVar3 != 0) {
            uVar2 = System_Runtime_Serialization_ObjectIDGenerator__FindElement
                              (param_1,lVar3,local_64);
            if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_074ae9b4;
            plVar9 = *(long **)(param_1 + 0x20);
            if (plVar9 == (long *)0x0) goto LAB_074ae9b8;
            lVar3 = *(long *)(lVar11 + 0x20 + uVar10 * 8);
            if ((lVar3 != 0) &&
               (lVar6 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
              uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar4,0);
            }
            if (*(uint *)(plVar9 + 3) <= uVar2) goto LAB_074ae9b4;
            plVar9[(long)(int)uVar2 + 4] = lVar3;
            thunk_FUN_03f5d7b8(plVar9 + (long)(int)uVar2 + 4,lVar3);
            if (lVar12 == 0) goto LAB_074ae9b8;
            if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_074ae9b4;
            lVar3 = *plVar8;
            if (lVar3 == 0) goto LAB_074ae9b8;
            if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_074ae9b4;
            *(undefined8 *)(lVar3 + (long)(int)uVar2 * 8 + 0x20) =
                 *(undefined8 *)(lVar12 + 0x20 + uVar10 * 8);
          }
          uVar7 = (ulong)*(uint *)(lVar11 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)(int)*(uint *)(lVar11 + 0x18));
      }
      return;
    }
  }
LAB_074ae9b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

