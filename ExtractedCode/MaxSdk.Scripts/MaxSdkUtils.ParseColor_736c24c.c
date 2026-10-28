// rea decompile_all
// name: MaxSdkUtils$$ParseColor
// address: 0x736c24c
// body: available
// range: 0x736c24c-0x736c467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x736c45c to 0x7430ed4 System.String$$Insert (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x736c460 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x736c464 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MaxSdkUtils__ParseColor(float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_095209bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_091f6eb0);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_095209bc = 1;
  }
  fVar7 = 1.0;
  if (param_4 <= 1.0) {
    fVar7 = param_4;
  }
  fVar8 = 0.0;
  if (0.0 <= param_4) {
    fVar8 = fVar7 * 255.0;
  }
  iVar1 = -0x80000000;
  if (fVar8 != INFINITY) {
    iVar1 = (int)fVar8;
  }
  fVar7 = 1.0;
  if (param_1 <= 1.0) {
    fVar7 = param_1;
  }
  fVar8 = 0.0;
  if (0.0 <= param_1) {
    fVar8 = fVar7 * 255.0;
  }
  iVar2 = -0x80000000;
  if (fVar8 != INFINITY) {
    iVar2 = (int)fVar8;
  }
  fVar7 = 1.0;
  if (param_2 <= 1.0) {
    fVar7 = param_2;
  }
  fVar8 = 0.0;
  if (0.0 <= param_2) {
    fVar8 = fVar7 * 255.0;
  }
  iVar3 = -0x80000000;
  if (fVar8 != INFINITY) {
    iVar3 = (int)fVar8;
  }
  fVar7 = 1.0;
  if (param_3 <= 1.0) {
    fVar7 = param_3;
  }
  fVar8 = 0.0;
  if (0.0 <= param_3) {
    fVar8 = fVar7 * 255.0;
  }
  iVar4 = -0x80000000;
  if (fVar8 != INFINITY) {
    iVar4 = (int)fVar8;
  }
  lVar6 = FUN_03f5c394(DAT_0917fc88,4);
  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182b88);
  }
  uVar5 = System_Convert__ToByte(iVar1,0);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined1 *)(lVar6 + 0x20) = uVar5;
      uVar5 = System_Convert__ToByte(iVar2,0);
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
        *(undefined1 *)(lVar6 + 0x21) = uVar5;
        uVar5 = System_Convert__ToByte(iVar3,0);
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined1 *)(lVar6 + 0x22) = uVar5;
          uVar5 = System_Convert__ToByte(iVar4,0);
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
            *(undefined1 *)(lVar6 + 0x23) = uVar5;
            lVar6 = System_BitConverter__ToString(lVar6,0);
            if ((lVar6 != 0) &&
               (lVar6 = System_String__Replace(lVar6,DAT_091f8a38,DAT_091f5700,0), lVar6 != 0)) {
              System_String__Insert(lVar6,0,DAT_091f6eb0,0);
              return;
            }
            goto LAB_0736c464;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0736c464:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

