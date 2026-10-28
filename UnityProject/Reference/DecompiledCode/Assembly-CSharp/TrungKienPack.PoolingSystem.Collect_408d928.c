// rea decompile_all
// name: TrungKienPack.PoolingSystem$$Collect
// address: 0x408d928
// body: available
// range: 0x408d928-0x408dae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408da68 to 0x408d62c TrungKienPack.PoolCtrlObject$$Collect (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x408dae0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_PoolingSystem__Collect(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  uint local_24;
  
  if ((DAT_09515cda & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919db68);
    FUN_03f5c2a4(&DAT_0919db78);
    FUN_03f5c2a4(&DAT_09186320);
    FUN_03f5c2a4(&DAT_09189450);
    FUN_03f5c2a4(&DAT_09226408);
    DAT_09515cda = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09186320) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_0408d9f8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(param_1,DAT_09186320,1);
LAB_0408d9f8:
    local_24 = (*(code *)*puVar1)(param_1,puVar1[1]);
    if (**(long **)(DAT_09189450 + 0xb8) != 0) {
      uVar4 = FUN_06ef0700(**(long **)(DAT_09189450 + 0xb8),local_24,DAT_0919db68);
      if ((uVar4 & 1) == 0) {
        uVar2 = FUN_03f5c42c(DAT_09535420,&local_24);
        uVar2 = System_String__Format(DAT_09226408,param_1,uVar2,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__LogError(uVar2,0);
        return;
      }
      if ((**(long **)(DAT_09189450 + 0xb8) != 0) &&
         (lVar3 = FUN_06ef046c(**(long **)(DAT_09189450 + 0xb8),local_24,DAT_0919db78), lVar3 != 0))
      {
        TrungKienPack_PoolCtrlObject__Collect();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

