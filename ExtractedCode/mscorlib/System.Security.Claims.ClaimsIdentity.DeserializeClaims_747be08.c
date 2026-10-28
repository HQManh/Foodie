// rea decompile_all
// name: System.Security.Claims.ClaimsIdentity$$DeserializeClaims
// address: 0x747be08
// body: available
// range: 0x747be08-0x747c023 inclusive
// range: 0x747c0d8-0x747c0db inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x747bfa4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747c004 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747c020 to 0x89db2a8 FUN_089db2a8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x747c0d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0747c0d0) */

void System_Security_Claims_ClaimsIdentity__DeserializeClaims(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  
  if ((DAT_09521244 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181c60);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_091ab9a8);
    FUN_03f5c2a4(&DAT_091ab9b8);
    FUN_03f5c2a4(&DAT_091ab9c0);
    FUN_03f5c2a4(&DAT_0917be30);
    FUN_03f5c2a4(&DAT_09188030);
    DAT_09521244 = 1;
  }
  uVar2 = System_String__IsNullOrEmpty(param_2,0);
  if ((uVar2 & 1) != 0) {
LAB_0747c07c:
    plVar6 = (long *)(param_1 + 0x18);
    if (*plVar6 == 0) {
      lVar5 = thunk_FUN_03f9944c(DAT_0917be30);
      FUN_057e0400(lVar5,DAT_091ab9a8);
      *plVar6 = lVar5;
      thunk_FUN_03f5d7b8(plVar6,lVar5);
    }
    return;
  }
  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Convert__FromBase64String(param_2,0);
  puVar4 = (undefined8 *)thunk_FUN_03f9944c(DAT_09188030);
  System_IO_MemoryStream___ctor(puVar4,uVar3,0);
  lVar5 = thunk_FUN_03f9944c(DAT_09181c60);
  System_Runtime_Serialization_Formatters_Binary_BinaryFormatter___ctor(lVar5,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar6 = (long *)System_Runtime_Serialization_Formatters_Binary_BinaryFormatter__Deserialize
                             (lVar5,puVar4,0,0,0);
  lVar5 = DAT_0917be30;
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(DAT_0917be30 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == DAT_0917be30)) {
      *(long **)(param_1 + 0x18) = plVar6;
      if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == lVar5)) goto LAB_0747bfb0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar6);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
LAB_0747bfb0:
  plVar7 = (long *)(param_1 + 0x18);
  thunk_FUN_03f5d7b8(plVar7,plVar6);
  lVar5 = *plVar7;
  if (lVar5 != 0) {
    iVar8 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar8) {
        if (puVar4 != (undefined8 *)0x0) {
          FUN_089db2a8(*puVar4);
          return;
        }
        goto LAB_0747c07c;
      }
      lVar5 = FUN_057e0998(lVar5,iVar8,DAT_091ab9c0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(long *)(lVar5 + 0x50) = param_1;
      thunk_FUN_03f5d7b8((long *)(lVar5 + 0x50),param_1);
      lVar5 = *plVar7;
      iVar8 = iVar8 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

