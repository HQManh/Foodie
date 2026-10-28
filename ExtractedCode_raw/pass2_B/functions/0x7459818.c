// rea decompile_all
// name: System.Security.Cryptography.CryptoStream$$FlushFinalBlock
// address: 0x7459818
// body: available
// range: 0x7459818-0x7459a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74599d0 to 0x75d9dec System.Array$$Clear (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74599f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7459a3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_CryptoStream__FlushFinalBlock(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((DAT_09521141 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182f90);
    FUN_03f5c2a4(&DAT_09185920);
    DAT_09521141 = 1;
  }
  if (*(char *)(param_1 + 0x62) != '\0') {
    thunk_FUN_03fc39d4(&DAT_09188920);
    uVar8 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_09202c48);
    System_NotSupportedException___ctor(uVar8,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091c6bc0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar3);
  }
  plVar7 = *(long **)(param_1 + 0x30);
  if (plVar7 == (long *)0x0) goto LAB_074599f4;
  lVar4 = *plVar7;
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_09185920) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_074598c4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185920,4);
LAB_074598c4:
  lVar4 = (*(code *)*puVar2)(plVar7,uVar8,0,uVar1,puVar2[1]);
  *(undefined1 *)(param_1 + 0x62) = 1;
  if (*(char *)(param_1 + 0x61) != '\0') {
    if (0 < *(int *)(param_1 + 0x58)) {
      plVar7 = *(long **)(param_1 + 0x28);
      if (plVar7 == (long *)0x0) goto LAB_074599f4;
      (**(code **)(*plVar7 + 0x398))
                (plVar7,*(undefined8 *)(param_1 + 0x50),0,*(int *)(param_1 + 0x58),
                 *(undefined8 *)(*plVar7 + 0x3a0));
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(char *)(param_1 + 0x61) == '\0') goto LAB_07459950;
    }
    if ((lVar4 == 0) || (plVar7 = *(long **)(param_1 + 0x28), plVar7 == (long *)0x0))
    goto LAB_074599f4;
    (**(code **)(*plVar7 + 0x398))
              (plVar7,lVar4,0,*(undefined4 *)(lVar4 + 0x18),*(undefined8 *)(*plVar7 + 0x3a0));
  }
LAB_07459950:
  plVar7 = *(long **)(param_1 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    if ((*(byte *)(lVar4 + 0x130) < *(byte *)(DAT_09182f90 + 0x130)) ||
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09182f90 + 0x130) * 8 + -8) !=
        DAT_09182f90)) {
      (**(code **)(lVar4 + 0x2a8))(plVar7,*(undefined8 *)(lVar4 + 0x2b0));
    }
    else if (*(char *)((long)plVar7 + 0x62) == '\0') {
      System_Security_Cryptography_CryptoStream__FlushFinalBlock();
    }
    lVar4 = *(long *)(param_1 + 0x40);
    if (lVar4 != 0) {
      System_Array__Clear(lVar4,0,*(undefined4 *)(lVar4 + 0x18),0);
    }
    lVar4 = *(long *)(param_1 + 0x50);
    if (lVar4 != 0) {
      System_Array__Clear(lVar4,0,*(undefined4 *)(lVar4 + 0x18),0);
      return;
    }
    return;
  }
LAB_074599f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

