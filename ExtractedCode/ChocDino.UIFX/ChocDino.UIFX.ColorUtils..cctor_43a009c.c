// rea decompile_all
// name: ChocDino.UIFX.ColorUtils$$.cctor
// address: 0x43a009c
// body: available
// range: 0x43a009c-0x43a0313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a0308 to 0x8642ba0 UnityEngine.Gradient$$SetKeys (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43a030c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43a0310 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_ColorUtils___cctor(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_09517a99 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182738);
    FUN_03f5c2a4(&DAT_0917ffa8);
    FUN_03f5c2a4(&DAT_0917ffb0);
    FUN_03f5c2a4(&DAT_09184da0);
    DAT_09517a99 = 1;
  }
  lVar2 = FUN_03f5c394(DAT_0917ffb0,5);
  if (lVar2 == 0) goto LAB_043a0310;
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (uVar1 != 0) {
    *(undefined4 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0x3f8000003f15b788;
    *(undefined8 *)(lVar2 + 0x20) = 0x3f78c1353cff5337;
    if (uVar1 != 1) {
      *(undefined4 *)(lVar2 + 0x44) = 0x3e800000;
      *(undefined8 *)(lVar2 + 0x3c) = 0x3f8000003f5e304d;
      *(undefined8 *)(lVar2 + 0x34) = 0x3ee54e533eba22a9;
      if (2 < uVar1) {
        *(undefined4 *)(lVar2 + 0x58) = 0x3f000000;
        *(undefined8 *)(lVar2 + 0x50) = 0x3f8000003f543dab;
        *(undefined8 *)(lVar2 + 0x48) = 0x3ece1cc43f54873f;
        if (uVar1 != 3) {
          *(undefined4 *)(lVar2 + 0x6c) = 0x3f400000;
          *(undefined8 *)(lVar2 + 100) = 0x3f8000003f11ebd2;
          *(undefined8 *)(lVar2 + 0x5c) = 0x3e3fee7d3f595bc6;
          if (4 < uVar1) {
            *(undefined4 *)(lVar2 + 0x80) = 0x3f800000;
            *(undefined8 *)(lVar2 + 0x78) = 0x3f8000003e49643a;
            *(undefined8 *)(lVar2 + 0x70) = 0x3f3917193f521cfb;
            lVar3 = FUN_03f5c394(DAT_0917ffa8,2);
            if (lVar3 == 0) goto LAB_043a0310;
            if (*(int *)(lVar3 + 0x18) != 0) {
              *(undefined8 *)(lVar3 + 0x20) = 0x3f800000;
              uVar4 = DAT_09184da0;
              if (*(int *)(lVar3 + 0x18) != 1) {
                uVar7 = NEON_fmov(0x3f800000,4);
                *(undefined8 *)(lVar3 + 0x28) = uVar7;
                uVar4 = thunk_FUN_03f9944c(uVar4);
                UnityEngine_Gradient___ctor(uVar4,0);
                **(undefined8 **)(DAT_09182738 + 0xb8) = uVar4;
                thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09182738 + 0xb8),uVar4);
                if (**(long **)(DAT_09182738 + 0xb8) != 0) {
                  UnityEngine_Gradient__SetKeys(**(long **)(DAT_09182738 + 0xb8),lVar2,lVar3,0);
                  lVar2 = FUN_03f5c394(DAT_0917ffb0,2);
                  if (lVar2 != 0) {
                    if (*(int *)(lVar2 + 0x18) != 0) {
                      *(undefined4 *)(lVar2 + 0x30) = 0;
                      *(undefined8 *)(lVar2 + 0x28) = 0x3f4ccccd3f4ccccd;
                      *(undefined8 *)(lVar2 + 0x20) = 0x3f4ccccd3f4ccccd;
                      if (*(int *)(lVar2 + 0x18) != 1) {
                        *(undefined8 *)(lVar2 + 0x3c) = 0x3f4ccccd3f4ccccd;
                        *(undefined8 *)(lVar2 + 0x34) = 0x3f4ccccd3f4ccccd;
                        uVar4 = DAT_0917ffa8;
                        *(undefined4 *)(lVar2 + 0x44) = 0x3f800000;
                        lVar3 = FUN_03f5c394(uVar4,2);
                        if (lVar3 != 0) {
                          if ((*(int *)(lVar3 + 0x18) == 0) ||
                             (*(undefined8 *)(lVar3 + 0x20) = 0x3f800000, uVar4 = DAT_09184da0,
                             *(int *)(lVar3 + 0x18) == 1)) goto LAB_043a030c;
                          *(undefined8 *)(lVar3 + 0x28) = 0x3f80000000000000;
                          uVar4 = thunk_FUN_03f9944c(uVar4);
                          UnityEngine_Gradient___ctor(uVar4,0);
                          puVar5 = (undefined8 *)(*(long *)(DAT_09182738 + 0xb8) + 8);
                          *puVar5 = uVar4;
                          thunk_FUN_03f5d7b8(puVar5,uVar4);
                          lVar6 = *(long *)(*(long *)(DAT_09182738 + 0xb8) + 8);
                          if (lVar6 != 0) {
                            UnityEngine_Gradient__SetKeys(lVar6,lVar2,lVar3,0);
                            return;
                          }
                        }
                        goto LAB_043a0310;
                      }
                    }
                    goto LAB_043a030c;
                  }
                }
LAB_043a0310:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
            }
          }
        }
      }
    }
  }
LAB_043a030c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

