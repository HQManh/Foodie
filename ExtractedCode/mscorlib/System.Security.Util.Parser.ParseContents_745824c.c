// rea decompile_all
// name: System.Security.Util.Parser$$ParseContents
// address: 0x745824c
// body: available
// range: 0x745824c-0x745851f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74584ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x745851c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Util_Parser__ParseContents(long param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 local_58;
  
  if ((DAT_0952112f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a7e8);
    FUN_03f5c2a4(&DAT_0918beb8);
    FUN_03f5c2a4(&DAT_091f5a98);
    DAT_0952112f = 1;
  }
  local_58 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0918beb8);
  System_Security_Util_TokenizerStream___ctor();
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (System_Security_Util_Tokenizer__GetTokens(*(long *)(param_1 + 0x18),lVar4,2,0), lVar4 != 0)) {
    System_Security_Util_TokenizerStream__Reset(lVar4);
    uVar2 = System_Security_Util_Parser__DetermineFormat(param_1,lVar4);
    System_Security_Util_TokenizerStream__GoToPosition(lVar4,uVar2);
    if (*(long *)(param_1 + 0x18) != 0) {
      System_Security_Util_Tokenizer__GetTokens(*(long *)(param_1 + 0x18),lVar4,0xffffffff,0);
      System_Security_Util_TokenizerStream__Reset(lVar4);
      local_58 = local_58 & 0xffffffff;
      System_Security_Util_Parser__GetRequiredSizes(param_1,lVar4,(long)&local_58 + 4);
      uVar2 = local_58._4_4_;
      lVar5 = thunk_FUN_03f9944c(DAT_0918a7e8);
      System_Security_SecurityDocument___ctor(lVar5,uVar2);
      plVar8 = (long *)(param_1 + 0x10);
      *plVar8 = lVar5;
      thunk_FUN_03f5d7b8(plVar8,lVar5);
      local_58 = local_58 & 0xffffffff00000000;
      System_Security_Util_TokenizerStream__Reset(lVar4);
      uVar3 = System_Security_Util_TokenizerStream__GetNextFullToken(lVar4);
      do {
        if (((uVar3 ^ 0xffffffff) & 0xffff) == 0) {
          return;
        }
        if ((uVar3 >> 0xe & 1) != 0) {
          uVar1 = (ushort)uVar3 & 0xff00;
          if ((short)uVar1 < 0x4301) {
            if (uVar1 == 0x4100) {
              lVar5 = *plVar8;
              if (lVar5 == 0) break;
              uVar6 = 1;
LAB_0745849c:
              System_Security_SecurityDocument__AddToken(lVar5,uVar6,&local_58);
            }
            else {
              if (uVar1 != 0x4200) {
                if (uVar1 != 0x4300) goto LAB_074584f0;
                lVar5 = *plVar8;
                if (lVar5 != 0) {
                  uVar6 = 3;
                  goto LAB_0745849c;
                }
                break;
              }
              if (*plVar8 == 0) break;
              System_Security_SecurityDocument__AddToken(*plVar8,2,&local_58);
              lVar5 = *plVar8;
              uVar6 = System_Security_Util_TokenizerStream__GetNextString(lVar4);
              if (lVar5 == 0) break;
              System_Security_SecurityDocument__AddString(lVar5,uVar6,&local_58);
            }
            lVar5 = *plVar8;
            uVar6 = System_Security_Util_TokenizerStream__GetNextString(lVar4);
            if (lVar5 == 0) break;
            System_Security_SecurityDocument__AddString(lVar5,uVar6,&local_58);
          }
          else if (uVar1 == 0x4400) {
            if (*plVar8 == 0) break;
            System_Security_SecurityDocument__AddToken(*plVar8,4,&local_58);
          }
          else if (uVar1 == 0x5000) {
            System_Security_Util_TokenizerStream__GetNextString(lVar4);
          }
          else {
            if (uVar1 != 0x6300) {
LAB_074584f0:
              thunk_FUN_03fc39d4(&DAT_0918d988);
              uVar6 = thunk_FUN_03f9944c();
              System_Security_XmlSyntaxException___ctor();
              uVar7 = thunk_FUN_03fc39d4(&DAT_091d57d0);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar6,uVar7);
            }
            if (*plVar8 == 0) break;
            System_Security_SecurityDocument__AppendString(*plVar8,DAT_091f5a98,&local_58);
            lVar5 = *plVar8;
            uVar6 = System_Security_Util_TokenizerStream__GetNextString(lVar4);
            if (lVar5 == 0) break;
            System_Security_SecurityDocument__AppendString(lVar5,uVar6,&local_58);
          }
        }
        uVar3 = System_Security_Util_TokenizerStream__GetNextFullToken(lVar4);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

